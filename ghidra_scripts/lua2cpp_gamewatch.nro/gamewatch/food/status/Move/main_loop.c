
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGamewatchFood::status::Move_main_loop(L2CWeaponGamewatchFood *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar5 = lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_UP);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_71000344d0;
    }
    lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      iVar3 = 0;
      goto LAB_7100034524;
    }
  }
  else {
LAB_71000344d0:
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_GAMEWATCH_FOOD_STATUS_KIND_STOP);
  lib::L2CValue::L2CValue(aLStack80,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  iVar3 = 1;
LAB_7100034524:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

