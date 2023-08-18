
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialSAttack3_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *pLVar8;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0xa0a7907e5);
  lib::L2CValue::L2CValue(aLStack112,0xefa2b6d71);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  FUN_7100028af0(this);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_SUCCESS_SP);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_BRAVE_STATUS_SPECIAL_S_FLAG_ACTIVATE_LIGHTNING);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_LIGHTNING_INTERVAL_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_LIGHTNING_INTERVAL_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack208,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      FUN_7100029630(aLStack80,this);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_LIGHTNING_ACTIVE_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack224,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,2);
        uVar5 = lib::L2CValue::operator_(aLStack224,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_BRAVE_INSTANCE_WORK_ID_INT_LIGHTNING_COLLISION_LOG_GROUP);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::FighterSpecializer_Brave::alloc_log_group(pBVar7,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_GENERATE_ARTICLE_LIGHTNING);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    (aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_LIGHTNING_ACTIVE_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,0);
        lib::L2CValue::L2CValue
                  (aLStack240,_FIGHTER_BRAVE_STATUS_SPECIAL_S_WORK_INT_LIGHTNING_INTERVAL_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar4 = lib::L2CValue::as_integer(aLStack240);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack224);
      }
      lib::L2CValue::_L2CValue(aLStack208);
    }
  }
  app::LinkEvent::new_l2c_table();
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack80,0x170f3942d7);
  lib::L2CValue::operator_(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0xaa79e68a2);
  lib::L2CValue::operator_(pLVar8,pLVar6);
  lib::L2CValue::L2CValue(aLStack224,_LINK_NO_ARTICLE);
  FUN_710002a140(aLStack80,this,aLStack224,aLStack208);
  lib::L2CValue::operator_(aLStack208,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x7ad7b88f7);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    app::LinkEvent::new_l2c_table();
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x105a79305b);
    lib::L2CValue::L2CValue(aLStack80,0x1e72e7f68e);
    lib::L2CValue::operator_(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0xaa79e68a2);
    lib::L2CValue::operator_(pLVar8,pLVar6);
    lib::L2CValue::L2CValue(aLStack240,_LINK_NO_ARTICLE);
    FUN_710002a140(aLStack80,this,aLStack240,aLStack224);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_S_ATTACK3_APPEND);
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack224);
    goto LAB_7100029ee0;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack224,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x0);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator__(aLStack272,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((uVar5 & 1) != 0) goto LAB_7100029d80;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100029ee0;
  }
  lib::L2CValue::_L2CValue(aLStack224);
LAB_7100029d80:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100029ee0;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack224,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100029ee0;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100029ee0:
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

