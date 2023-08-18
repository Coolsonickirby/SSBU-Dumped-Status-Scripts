
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootAir_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) != 0) {
    iVar3 = 1;
    goto LAB_710002a7b4;
  }
  lib::L2CValue::L2CValue(aLStack96,false);
  FUN_7100026bf0(aLStack80,this,aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_71000270b0(this);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_END);
        lib::L2CValue::L2CValue(aLStack112,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
        goto LAB_710002a79c;
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) goto LAB_710002a3b4;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
LAB_710002a3b4:
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        FUN_7100027da0(aLStack64,this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR_TURN);
          lib::L2CValue::L2CValue(aLStack112,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
          goto LAB_710002a79c;
        }
      }
      FUN_7100028bd0(aLStack64,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar1 & 1U) != 0) goto LAB_710002a7ac;
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      if ((bVar1 & 1U) == 0) {
        FUN_71000285f0(aLStack128,this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) == 0) goto LAB_710002a5e8;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
      lib::L2CValue::L2CValue(aLStack112,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
      goto LAB_710002a79c;
    }
LAB_710002a5e8:
    FUN_7100028dc0(aLStack64,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
      lib::L2CValue::L2CValue(aLStack112,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
      goto LAB_710002a79c;
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_SHOOT_AIR_INHERIT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_TURN);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_START_PRECEDE_CHECK);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
      goto LAB_710002a79c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_LANDING);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
LAB_710002a79c:
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
  }
LAB_710002a7ac:
  iVar3 = 0;
LAB_710002a7b4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

