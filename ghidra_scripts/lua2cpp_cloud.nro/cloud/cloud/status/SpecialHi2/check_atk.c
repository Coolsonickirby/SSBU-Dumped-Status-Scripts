
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::SpecialHi2Fall_check_atk(L2CFighterCloud *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack112,in_x1);
  lib::L2CValue::L2CValue(aLStack128,in_x2);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x10860c2250);
  lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x5d6e20d24);
    lib::L2CValue::L2CValue(aLStack64,COLLISION_KIND_HIT);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_STATUS_SPECIAL_HI2_INT_HIT_OBJECT_NUM);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_SPECIAL_HI2_HIT_OBJECT_NUM_MAX);
      uVar4 = lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0xa854977fe);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_STATUS_SPECIAL_HI2_INT_HIT_OBJECT_ID);
        lib::L2CValue::operator_(aLStack64,aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
        iVar1 = lib::L2CValue::as_integer(pLVar3);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_CLOUD_STATUS_SPECIAL_HI2_INT_HIT_OBJECT_NUM);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar1);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

