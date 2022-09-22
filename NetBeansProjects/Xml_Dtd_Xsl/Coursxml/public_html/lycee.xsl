<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html"/>

    <xsl:template match="lycee">
        <html>
            <head>
                <title>lycee.xsl</title>
            </head>
            <body>
                <xsl:apply-templates />
            </body>
        </html>
    </xsl:template>
    
    <xsl:template match="nom">
        <html>
            <xsl:value-of select="@nom"/>
            <table>
                <xsl:apply-templates />
            </table>
        </html>
    </xsl:template>
    <xsl:template match="nom">
        <tr>
            <xsl:apply-templates />
        </tr>
    </xsl:template>
    <xsl:template match="age">
        <tr>
            <xsl:apply-templates />
        </tr>
    </xsl:template>
    <xsl:template match="prenom">
        <tr>
            <xsl:apply-templates />
        </tr>
    </xsl:template>
    

</xsl:stylesheet>
