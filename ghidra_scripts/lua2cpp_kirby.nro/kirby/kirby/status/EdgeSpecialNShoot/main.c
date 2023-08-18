
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::EdgeSpecialNShoot_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_CHARGE_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_SPECIAL_N_S);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_SPECIAL_N_M);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0xa82125b6f);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
      lVar4 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0xe724031fb);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
      lVar4 = lib::L2CValue::as_integer(aLStack64);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
      goto LAB_710010ea74;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_SPECIAL_N_L);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) goto LAB_710010ea84;
    lib::L2CValue::L2CValue(aLStack64,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x1331f32137);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_CANCEL_SCREEN_EFFECT);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator_(aLStack96,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xa1b1b0ad5);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xeeb496041);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
LAB_710010ea74:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710010ea84:
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack64,lVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_EDGE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  lVar4 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,lVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,aLStack64);
  lib::L2CValue::L2CValue(aLStack160,aLStack112);
  lib::L2CValue::L2CValue(aLStack176,aLStack96);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_ENABLE_FALL_SPEED);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_EDGE_STATUS_SPECIAL_N_FLAG_ENABLE_FALL_SPEED_END_INIT)
  ;
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,false);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,EdgeSpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

