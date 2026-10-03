
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005e930(L2CValue *param_1,long param_2)

{
  int iVar1;
  FighterPickelMaterialKind FVar2;
  L2CTable *this;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  ulong uVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(this,5);
  lib::L2CValue::L2CValue(aLStack144,this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,1);
  lib::L2CValue::operator=(pLVar3,aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,2);
  lib::L2CValue::operator=(pLVar3,aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,3);
  lib::L2CValue::operator=(pLVar3,aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,4);
  lib::L2CValue::operator=(pLVar3,aLStack112);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,5);
  lib::L2CValue::operator=(pLVar3,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack144,1);
  lib::L2CValue::L2CValue(param_1,pLVar3);
  pLVar3 = (L2CValue *)(param_2 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  iVar1 = lib::L2CValue::as_integer(param_1);
  iVar1 = app::FighterSpecializer_Pickel::get_material_num(pBVar5,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::L2CValue(aLStack160,param_1);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  FVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar1 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar5,FVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::~L2CValue(param_1);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,2);
    lib::L2CValue::L2CValue(param_1,pLVar4);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    iVar1 = lib::L2CValue::as_integer(param_1);
    iVar1 = app::FighterSpecializer_Pickel::get_material_num(pBVar5,iVar1);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    lib::L2CValue::L2CValue(aLStack160,param_1);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    FVar2 = lib::L2CValue::as_integer(aLStack160);
    iVar1 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar5,FVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::~L2CValue(param_1);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,3);
      lib::L2CValue::L2CValue(param_1,pLVar4);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
      pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      iVar1 = lib::L2CValue::as_integer(param_1);
      iVar1 = app::FighterSpecializer_Pickel::get_material_num(pBVar5,iVar1);
      lib::L2CValue::L2CValue(aLStack64,iVar1);
      lib::L2CValue::L2CValue(aLStack160,param_1);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
      pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      FVar2 = lib::L2CValue::as_integer(aLStack160);
      iVar1 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar5,FVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::~L2CValue(param_1);
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,4);
        lib::L2CValue::L2CValue(param_1,pLVar4);
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
        pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
        iVar1 = lib::L2CValue::as_integer(param_1);
        iVar1 = app::FighterSpecializer_Pickel::get_material_num(pBVar5,iVar1);
        lib::L2CValue::L2CValue(aLStack64,iVar1);
        lib::L2CValue::L2CValue(aLStack160,param_1);
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
        pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
        FVar2 = lib::L2CValue::as_integer(aLStack160);
        iVar1 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar5,FVar2);
        lib::L2CValue::L2CValue(aLStack80,iVar1);
        uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::~L2CValue(param_1);
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,5);
          lib::L2CValue::L2CValue(param_1,pLVar4);
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
          pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
          iVar1 = lib::L2CValue::as_integer(param_1);
          iVar1 = app::FighterSpecializer_Pickel::get_material_num(pBVar5,iVar1);
          lib::L2CValue::L2CValue(aLStack64,iVar1);
          lib::L2CValue::L2CValue(aLStack160,param_1);
          pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
          pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
          FVar2 = lib::L2CValue::as_integer(aLStack160);
          iVar1 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar5,FVar2);
          lib::L2CValue::L2CValue(aLStack80,iVar1);
          uVar6 = lib::L2CValue::operator<=(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::~L2CValue(param_1);
            lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
          }
        }
      }
    }
  }
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

