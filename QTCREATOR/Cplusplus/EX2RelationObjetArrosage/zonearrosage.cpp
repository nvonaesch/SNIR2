#include "zonearrosage.h"

ZoneArrosage::ZoneArrosage(const int _numZone, const int _commandeVanne, const int _senseAVanne,
                           const int _senseBVanne, const int _brocheHumidite):
    laVanne(nullptr),
    leCapteurHumidite(nullptr),
    numZone(_numZone)
{
    laVanne = new Vanne(_commandeVanne,_senseAVanne,_senseBVanne);
    CapteurHumidite = new capteurHumidite(_capteurHumidite);
}

void ZoneArrosage::Piloter()
{

}

ZoneArrosage::~ZoneArrosage()
{

}
