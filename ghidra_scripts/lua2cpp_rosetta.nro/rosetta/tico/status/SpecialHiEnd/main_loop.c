
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::SpecialHiEnd_main_loop
          (L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_HI_WORK_INT_INTERRUPT_STATUS_KIND);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROSETTA_STATUS_KIND_SPECIAL_HI_END);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_HI_WORK_INT_INTERRUPT_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_SPECIAL_HI_WORK_INT_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,iVar3);
        uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack64,
                     _WEAPON_ROSETTA_TICO_STATUS_SPECIAL_HI_WORK_INT_INTERRUPT_STATUS_KIND_NEXT);
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_KIND_CLIFF_CATCH_MOVE);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar4 & 1) != 0) {
LAB_710002ee9c:
            lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW);
            lib::L2CValue::L2CValue(aLStack112,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack80);
            return;
          }
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar4 & 1) != 0) goto LAB_710002ee9c;
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    iVar3 = 0;
  }
  else {
    FUN_710002c5a0(this);
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

