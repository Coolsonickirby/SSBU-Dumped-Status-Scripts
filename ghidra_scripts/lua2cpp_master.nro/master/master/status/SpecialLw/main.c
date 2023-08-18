
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialLw_main(L2CFighterMaster *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  
  lib::L2CValue::L2CValue(aLStack112,false);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack112);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_TURN);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_KIND_SPECIAL_LW_LANDING_1);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144,0xab6928cf2);
      lib::L2CValue::L2CValue(aLStack160,0xe46c0e666);
      lib::L2CValue::L2CValue(aLStack176,false);
      lib::L2CValue::L2CValue(aLStack208,aLStack144);
      lib::L2CValue::L2CValue(aLStack224,aLStack160);
      lib::L2CValue::L2CValue(aLStack240,aLStack176);
      lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
                (this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
        lib::L2CValue::L2CValue(aLStack256,0xe46c0e666);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar7 = lib::L2CValue::as_hash(aLStack256);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar7,false,-1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_GENERATE_ARTICLE_AXE);
        lib::L2CValue::L2CValue(aLStack256,0xab6928cf2);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        HVar7 = lib::L2CValue::as_hash(aLStack256);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar7,false,-1.0);
      }
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      pLVar5 = aLStack144;
      goto LAB_71000215b8;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLOAT_SUSPEND_MOTION_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_STATUS_SPECIAL_LW_FLOAT_SUSPEND_MOTION_RATE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0xe46c0e666);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,true);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    fVar9 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    fVar10 = (float)lib::L2CValue::as_number(aLStack176);
    bVar2 = lib::L2CValue::as_bool(aLStack192);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),fVar10,(bool)(bVar2 & 1),
               false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0xab6928cf2);
    lib::L2CValue::L2CValue(aLStack160,false);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,true);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    fVar9 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    fVar10 = (float)lib::L2CValue::as_number(aLStack176);
    bVar2 = lib::L2CValue::as_bool(aLStack192);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),fVar10,(bool)(bVar2 & 1),
               false);
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack160,0x1a645976e2);
  lib::L2CValue::L2CValue(aLStack176,0);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  HVar7 = lib::L2CValue::as_hash(aLStack160);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar7,uVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  pLVar5 = aLStack128;
LAB_71000215b8:
  lib::L2CValue::_L2CValue(pLVar5);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    app::lua_bind::ControlModule__reset_flick_y_impl(this->moduleAccessor);
    app::lua_bind::ControlModule__reset_flick_sub_y_impl(this->moduleAccessor);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1d);
    lib::L2CValue::L2CValue(aLStack112,0xfe);
    lib::L2CValue::operator_(pLVar5,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

