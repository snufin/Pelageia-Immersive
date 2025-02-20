//
// Created by pylinskyi.k on 03.11.2023.
//

#ifndef PELAGEIA_IMMERSIVE_GAMEMAP_H
#define PELAGEIA_IMMERSIVE_GAMEMAP_H

#include <vector>
#include "Layer.h"
#include "TileLayer.h"

class GameMap{
public:
    void Render() { for(auto layer: m_MapLayer) layer->Render(); }
    void Update(int dt) { for(auto layer: m_MapLayer) layer->Update(dt); }

    std::vector<Layer*> GetMapLayers() { return m_MapLayer; }
private:
    friend class MapParser;
    std::vector<Layer*> m_MapLayer;
};

#endif //PELAGEIA_IMMERSIVE_GAMEMAP_H
