
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLwTurn_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_PASS);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lua2cpp::L2CFighterCommon::sub_set_pass(this);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_PASS);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    this_00 = &this->globalTable;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      bVar1 = app::lua_bind::GroundModule__is_passable_ground_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT2_FLAG_GUARD_TO_PASS);
        lib::L2CValue::operator_(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLAG_PASS);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack96,0xfa4760a42);
    lib::L2CValue::L2CValue(aLStack112,0x13afef8796);
    lib::L2CValue::L2CValue(aLStack128,true);
    lib::L2CValue::L2CValue(aLStack144,aLStack96);
    lib::L2CValue::L2CValue(aLStack160,aLStack112);
    lib::L2CValue::L2CValue(aLStack176,aLStack128);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar2 & 1U) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
          lib::L2CValue::L2CValue(aLStack192,0x13afef8796);
          lib::L2CValue::L2CValue(aLStack208,true);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          HVar6 = lib::L2CValue::as_hash(aLStack192);
          bVar1 = lib::L2CValue::as_bool(aLStack208);
          app::lua_bind::ArticleModule__change_motion_impl
                    (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
          lib::L2CValue::L2CValue(aLStack192,0xfa4760a42);
          lib::L2CValue::L2CValue(aLStack208,true);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          HVar6 = lib::L2CValue::as_hash(aLStack192);
          bVar1 = lib::L2CValue::as_bool(aLStack208);
          app::lua_bind::ArticleModule__change_motion_impl
                    (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
        }
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_7100011ba0(this);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SPECIAL_LW);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

