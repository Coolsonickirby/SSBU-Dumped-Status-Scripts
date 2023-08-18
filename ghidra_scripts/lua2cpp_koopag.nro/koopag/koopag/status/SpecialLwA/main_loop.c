
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopag::status::SpecialLwA_main_loop(L2CFighterKoopag *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
LAB_7100014de8:
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPA_STATUS_SPECIAL_LW_FLAG1);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          FUN_7100006150(this);
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KOOPA_STATUS_KIND_SPECIAL_LW_L);
          lib::L2CValue::L2CValue(aLStack80,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack64);
          goto LAB_7100014cfc;
        }
        lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xc0);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
        GVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      iVar3 = 0;
      goto LAB_7100014f2c;
    }
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar5 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) goto LAB_7100014de8;
    }
  }
LAB_7100014cfc:
  iVar3 = 1;
LAB_7100014f2c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

