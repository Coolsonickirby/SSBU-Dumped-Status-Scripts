
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::SpecialHiShoot_main(L2CFighterKoopajr *this,L2CValue *return_value)

{
  byte bVar1;
  uchar uVar2;
  bool bVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  long lVar6;
  long lVar7;
  Hash40 HVar8;
  ulong uVar9;
  L2CValue *this_00;
  float fVar10;
  float fVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_INTERRUPT);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_DAMAGE_FLY);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack96,_ATTACH_ITEM_GROUP_HIP);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),uVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack96,_ATTACH_ITEM_GROUP_BADGE);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),uVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_SPECIAL);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_forbid_group_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_TREAD_JUMP);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_forbid_group_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_WALL_JUMP);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_forbid_group_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_JUMP_AERIAL);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__enable_transition_term_forbid_group_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x14bc64f6ae);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_INT_FORCE_DAMAGE_MOTION_KIND);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_REMAINCLOWN);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar4,false,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x5e0bf9d48);
  lib::L2CValue::L2CValue(aLStack96,0x90eeb4fc7);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  lVar7 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar6,lVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xaefe46b4c);
  lib::L2CValue::L2CValue(aLStack96,0xef9304efc);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  lVar7 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar6,lVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x5327cb690);
  lib::L2CValue::L2CValue(aLStack96,0x9511940c5);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  lVar7 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_status_default_int64_impl(this->moduleAccessor,lVar6,lVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
  GVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x12d5891ef6);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar8 = lib::L2CValue::as_hash(aLStack80);
  fVar10 = (float)lib::L2CValue::as_number(aLStack112);
  fVar11 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar9 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_STATUS_SPECIAL_HI_SHOOT_INT_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_71000115c0);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,SpecialHiShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

