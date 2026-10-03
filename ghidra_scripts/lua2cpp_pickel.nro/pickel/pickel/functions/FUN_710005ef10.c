
void FUN_710005ef10(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  FighterPickelCraftWeaponKind FVar1;
  L2CValue *this;
  Fighter *pFVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
  pFVar2 = (Fighter *)lib::L2CValue::as_pointer(this);
  FVar1 = lib::L2CValue::as_integer(param_3);
  fVar4 = (float)app::FighterSpecializer_Pickel::get_craft_weapon_durability(pFVar2,FVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar3 = lib::L2CValue::operator<=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

