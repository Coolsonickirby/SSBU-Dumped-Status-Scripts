
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::EflameSpecialN_main(L2CFighterKirby *this,L2CValue *return_value)

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
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIND_EFLAME);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_EFLAME_GENERATE_ARTICLE_ESWORD);
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
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EFLAME_GENERATE_ARTICLE_ESWORD);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      pFVar7 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      app::FighterSpecializer_EFlame::kirby_esword_update_lr(pFVar7);
    }
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack96,0x77a08c3fc);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_EFLAME_N_VOICE_NUM);
  HVar8 = lib::L2CValue::as_hash(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  uVar3 = app::sv_math::rand(HVar8,iVar2);
  lib::L2CValue::L2CValue(aLStack112,uVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,1);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EFLAME_INSTANCE_WORK_ID_INT_N_VOICE_KIND_NUM_PREV);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack144);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EFLAME_N_VOICE_NUM);
    lib::L2CValue::operator_(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack112,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_VOICE_KIND_NUM);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_EFLAME_INSTANCE_WORK_ID_INT_N_VOICE_KIND_NUM_PREV);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  iVar2 = FIGHTER_KIND_KIRBY;
  if ((uVar6 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    uVar6 = lib::L2CValue::operator__(aLStack96,pLVar5);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0x18055c65d3);
      HVar8 = lib::L2CValue::as_hash(aLStack160);
      iVar2 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar8,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0x1a8b2ec8b9);
      HVar8 = lib::L2CValue::as_hash(aLStack160);
      iVar2 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar8,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0x14eb311c43);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar9 = lib::L2CValue::as_integer(aLStack192);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack160,iVar2);
    lib::L2CValue::operator_(aLStack128,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_EFLAME_STATUS_SPECIAL_N_WORK_INT_VOICE_PLAY_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack176,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack224,aLStack160);
  lib::L2CValue::L2CValue(aLStack240,aLStack176);
  lib::L2CValue::L2CValue(aLStack256,aLStack192);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation_kirby_copy
            (this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack288,true);
  lua2cpp::L2CFighterCommon::sub_set_ground_correct_by_situation(this,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue(aLStack304,true);
  FUN_710011e060(this,aLStack304);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack320,EflameSpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

