
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::AttackAir_main(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_attack_air(this);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,lVar5);
  lib::L2CValue::L2CValue(aLStack64,0xd40042152);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0x88fc722e4);
      lib::L2CValue::L2CValue(aLStack80,0xf62011258);
      lVar5 = lib::L2CValue::as_integer(aLStack64);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar7);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,true);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::ItemModule__set_have_item_visibility_impl
                (this->moduleAccessor,(bool)(bVar1 & 1),0);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_ATTACK_AIR_FLAG_KEEP_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,lVar5);
  lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,lVar5);
    lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
    uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,&LAB_7100011680);
      lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xdde67d935);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_MOTION_KIND);
      lVar5 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x12225189cd);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_LOOP_MOTION_KIND);
      lVar5 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack96,0x165ba04d40);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar8 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_LOOP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack64,AttackAir_main_loop);
      lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xc3a4e2597);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_MOTION_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x11e988a7a3);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_LOOP_MOTION_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack96,0x15eec6c3f4);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    uVar8 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BAYONETTA_STATUS_ATTACK_AIR_INT_LOOP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack64,AttackAir_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

