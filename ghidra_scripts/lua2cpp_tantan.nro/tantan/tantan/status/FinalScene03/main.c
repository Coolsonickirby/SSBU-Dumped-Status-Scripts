
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::FinalScene03_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  Article *pAVar9;
  ulong uVar10;
  BattleObjectModuleAccessor *pBVar11;
  L2CValue *this_00;
  Fighter *pFVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf70771648);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar13 = (float)lib::L2CValue::as_number(aLStack96);
  fVar14 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  app::lua_bind::KineticModule__clear_speed_all_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_GONGFINAL);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_GONGFINAL);
  lib::L2CValue::L2CValue(aLStack96,0xf70771648);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar4,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_PUNCH_L);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack96,0xcec1191d4);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
  lib::L2CValue::L2CValue(aLStack96,0xf70771648);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar4,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_PUNCH1);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar2);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar7);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  uVar8 = lib::L2CValue::operator__
                    (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar8 & 1) == 0) {
    pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack80);
    uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
    lib::L2CValue::L2CValue(aLStack112,uVar3);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar7);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack144,0xf166a4401);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    uVar10 = lib::L2CValue::as_integer(aLStack144);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar8,uVar10);
    lib::L2CValue::L2CValue(aLStack112,fVar13);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,false);
    fVar13 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    app::lua_bind::PostureModule__set_scale_impl(pBVar11,fVar13,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_FINAL_MODULE_SCENE_03_INIT);
  pFVar12 = (Fighter *)lib::L2CValue::as_pointer(this_00);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Tantan::call_final_module(pFVar12,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FinalScene03_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

