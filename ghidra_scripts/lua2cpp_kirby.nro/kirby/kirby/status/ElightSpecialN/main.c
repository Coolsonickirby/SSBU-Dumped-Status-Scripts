
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::ElightSpecialN_main(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  FighterModuleAccessor *pFVar7;
  Hash40 HVar8;
  ulong uVar9;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  
  iVar2 = FIGHTER_KIND_KIRBY;
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  uVar6 = lib::L2CValue::operator__(aLStack96,pLVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_ELIGHT);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELIGHT_GENERATE_ARTICLE_ESWORD);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_GENERATE_ARTICLE_ESWORD);
        lib::L2CValue::L2CValue(aLStack128,true);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack128);
        app::lua_bind::ArticleModule__set_visibility_whole_impl
                  (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_GENERATE_ARTICLE_ESWORD);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      pFVar7 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      app::FighterSpecializer_ELight::kirby_esword_update_lr(pFVar7);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack96,0x77a08c3fc);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ELIGHT_N_VOICE_NUM);
  HVar8 = lib::L2CValue::as_hash(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  uVar3 = app::sv_math::rand(HVar8,iVar2);
  lib::L2CValue::L2CValue(aLStack160,uVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack176,1);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_INSTANCE_WORK_ID_INT_N_VOICE_KIND_NUM_PREV);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack192,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack192);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_N_VOICE_NUM);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack160,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_INT_VOICE_KIND_NUM);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_INSTANCE_WORK_ID_INT_N_VOICE_KIND_NUM_PREV);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  iVar2 = FIGHTER_KIND_KIRBY;
  if ((uVar6 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    uVar6 = lib::L2CValue::operator__(aLStack96,pLVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x18de5eb751);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      iVar2 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar8,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack208,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x1a75fbbbed);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      iVar2 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar8,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack208,iVar2);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0x14eb311c43);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar9 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_STATUS_SPECIAL_N_INT_VOICE_PLAY_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack224,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack240,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack288,aLStack224);
  lib::L2CValue::L2CValue(aLStack304,aLStack240);
  lib::L2CValue::L2CValue(aLStack320,aLStack256);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ELIGHT_INSTANCE_WORK_ID_FLAG_SPECIAL_N_LANDING);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) {
      FUN_710011ab00(this);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ELIGHT_INSTANCE_WORK_ID_FLAG_SPECIAL_N_LANDING);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,ElightSpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

