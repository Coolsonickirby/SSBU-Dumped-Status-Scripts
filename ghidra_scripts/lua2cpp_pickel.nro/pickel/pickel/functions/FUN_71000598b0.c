
void FUN_71000598b0(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3)

{
  FighterPickelCraftWeaponKind FVar1;
  FighterPickelMaterialKind FVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,param_3);
  FUN_71000599c0(aLStack80,aLStack96);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    FVar1 = lib::L2CValue::as_integer(param_2);
    FVar2 = lib::L2CValue::as_integer(param_3);
    fVar4 = (float)app::FighterSpecializer_Pickel::get_init_weapon_durability_param(FVar1,FVar2);
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    lib::L2CValue::L2CValue(param_1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(param_1,0);
  }
  return;
}

