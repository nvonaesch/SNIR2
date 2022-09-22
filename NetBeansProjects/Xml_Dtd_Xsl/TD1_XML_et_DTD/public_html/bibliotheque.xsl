<xsl:stylesheet version = '1.0' xmlns:xsl='http://www.w3.org/1999/XSL/Transform'>
    <xsl:template match="bibliotheque">
        <html>
            
            <head>
                <link href="bibliotheque.css" type="text/css" rel="stylesheet" />
            </head>
            
            <body>
                <xsl:apply-templates />
            </body>
            	
        </html>
    </xsl:template>
    
    <xsl:template match="allee">
        <h1>Allée 
            <xsl:value-of select="@numero" />
        </h1>
        <hr/>
        <xsl:apply-templates />
	
    </xsl:template>

    <xsl:template match="rayon">
        <h3> Rayon 
            <xsl:value-of select="@numero" />
        </h3>
        <table>		
            <tr>
                <th>Catégorie de l'ouvrage </th>
                <th>Titre </th>
                <th>Auteur </th>
                <th>Numéro </th>
            </tr>
            <xsl:apply-templates />
        </table>
    </xsl:template>
    
    <xsl:template match="ouvrage">
        <tr>
            <td>
                
                <xsl:value-of select="@type" />
                
            </td>
            <xsl:apply-templates />
        </tr>
    </xsl:template>
    
    <xsl:template match="titre">
        
        <td class="titre">
            <xsl:value-of select="." />
        </td>
        
        <xsl:if test="../auteur = false()">
            <td class="pasauteur">Auteur anonyme</td>
            <xsl:if test="../numero = false()">
                <td class="pasnumero">Non référencié</td>
            </xsl:if>
        </xsl:if>
        
    </xsl:template>
    
    <xsl:template match="auteur">
        
        <td class="auteur">
            <xsl:value-of select="." />
        </td>
        
        <xsl:if test="../numero = false()">
            <td class="pasnumero">Non référencié</td>
        </xsl:if>
        
    </xsl:template>
    
    <xsl:template match="numero">
        
        <td class="numero">
            <xsl:value-of select="." />
        </td>
        
    </xsl:template>
</xsl:stylesheet>