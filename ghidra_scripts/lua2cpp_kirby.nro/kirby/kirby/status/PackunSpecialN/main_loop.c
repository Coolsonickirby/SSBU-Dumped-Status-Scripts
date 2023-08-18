
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PackunSpecialN_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *pLVar5;
  Fighter *pFVar6;
  ulong uVar7;
  Hash40 HVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_PACKUN_STATUS_SPECIAL_N_FLAG_GENERATE_ARTICLE_SPIKEBALL);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PACKUN_STATUS_SPECIAL_N_FLAG_GENERATE_ARTICLE_SPIKEBALL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
LAB_7100160834:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PACKUN_SPECIAL_N_LOOP);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_7100160888;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_7100160898;
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
      GVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xf3a6aace3);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
                (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_7100160cd8;
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_LINK_NO_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_7100160898;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
      lib::L2CValue::L2CValue(aLStack96,0x59f79558f);
      lib::L2CValue::L2CValue(aLStack112,true);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::ArticleModule__change_motion_impl
                (this->moduleAccessor,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
LAB_7100160ccc:
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_7100160888;
    }
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) goto LAB_7100160898;
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_710015e370(this);
    lib::L2CValue::L2CValue(aLStack80,0x1331f32137);
    HVar8 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_impl
              (this->moduleAccessor,HVar8,-1.0,1.0,0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_LINK_NO_CONSTRAINT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_7100160898;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
      lib::L2CValue::L2CValue(aLStack96,0x9b00ba75d);
      lib::L2CValue::L2CValue(aLStack112,true);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      app::lua_bind::ArticleModule__change_motion_impl
                (this->moduleAccessor,iVar3,HVar8,(bool)(bVar1 & 1),-1.0);
      goto LAB_7100160ccc;
    }
LAB_7100160cd8:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack112;
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
    bVar1 = app::FighterSpecializer_Packun::is_special_n_spikeball_changed_status(pFVar6);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) goto LAB_7100160834;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PACKUN_SPECIAL_N_HIT_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100160888:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_7100160898:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

