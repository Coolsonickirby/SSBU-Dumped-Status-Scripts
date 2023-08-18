
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AirLassoReach_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  Article *pAVar11;
  BattleObjectModuleAccessor *pBVar12;
  Hash40 HVar13;
  float fVar14;
  float fVar15;
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
  
  lib::L2CValue::L2CValue(aLStack96,0x47dee83e5);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND);
  lVar7 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_IS_L);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_7100020a90(this);
  lib::L2CValue::L2CValue(aLStack96,0x59a6ef56c);
  lib::L2CValue::L2CValue(aLStack112,0xadd214353);
  lVar7 = lib::L2CValue::as_integer(aLStack96);
  lVar8 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar7,lVar8);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack112,0xcec1191d4);
  lVar7 = lib::L2CValue::as_integer(aLStack96);
  lVar8 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar7,lVar8);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack176,0x47dee83e5);
  lib::L2CValue::L2CValue(aLStack192,true);
  FUN_7100039610(aLStack160,this,aLStack176,aLStack192);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack112,0xf823851f3);
  lib::L2CValue::L2CValue(aLStack128,0x16f19062e4);
  lib::L2CValue::L2CValue(aLStack144,true);
  FUN_71000279c0(aLStack96,this,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_NO_CONSTRAINT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPIRAL_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  pvVar9 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar3);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar9);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  uVar10 = lib::L2CValue::operator__
                     (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X
                     );
  if ((uVar10 & 1) == 0) {
    pAVar11 = (Article *)lib::L2CValue::as_pointer(aLStack112);
    uVar4 = app::lua_bind::Article__get_battle_object_id_impl(pAVar11);
    lib::L2CValue::L2CValue(aLStack144,uVar4);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar9 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar9);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
    iVar3 = app::lua_bind::PhysicsModule__get_2nd_node_num_impl(pBVar12);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    if (-1 < iVar3) {
      iVar6 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack208,iVar6);
        lib::L2CValue::L2CValue(aLStack224,0.1);
        iVar5 = lib::L2CValue::as_integer(aLStack208);
        fVar14 = (float)lib::L2CValue::as_number(aLStack224);
        pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
        app::lua_bind::PhysicsModule__set_2nd_collision_size_impl(pBVar12,iVar5,fVar14);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        bVar2 = iVar6 < iVar3;
        iVar6 = iVar6 + 1;
      } while (bVar2);
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack144,0x1599a2452c);
  HVar13 = lib::L2CValue::as_hash(aLStack144);
  iVar3 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar13,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LANDING);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__enable_transition_term_group_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0x11a57cec63);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_MOTION_KIND_FAILURE);
  lVar7 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0xec62e546f);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,1.0);
  lib::L2CValue::L2CValue(aLStack240,false);
  HVar13 = lib::L2CValue::as_hash(aLStack144);
  fVar14 = (float)lib::L2CValue::as_number(aLStack208);
  fVar15 = (float)lib::L2CValue::as_number(aLStack224);
  bVar1 = lib::L2CValue::as_bool(aLStack240);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar13,fVar14,fVar15,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  fVar14 = (float)lib::L2CValue::as_number(aLStack144);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar14);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_TANTAN_SPIRALLEFT_STATUS_KIND_REACH);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_AIR_LASSO_REACH_WORK_INT_ARTICLE_STATUS);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar6 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,false);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,true);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::GroundModule__set_keep_distant_cliff_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,AirLassoReach_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

