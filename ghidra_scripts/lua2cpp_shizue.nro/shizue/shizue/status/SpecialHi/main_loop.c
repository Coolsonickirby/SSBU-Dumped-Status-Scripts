
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialHi_main_loop(L2CFighterShizue *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ArticleOperationTarget AVar5;
  int iVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_FLAG_START);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_MURABITO_SPECIAL_HI);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_710001de40(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack112,_ARTICLE_OPE_TARGET_ALL);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    AVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__shoot_impl(this->moduleAccessor,iVar3,AVar5,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_MURABITO);
    uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_GENERATE_ARTICLE_HELMET);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x67aaaeea6);
      lib::L2CValue::L2CValue(aLStack112,0x9fbc53e94);
      lVar9 = lib::L2CValue::as_integer(aLStack80);
      lVar10 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::VisibilityModule__set_status_default_int64_impl
                (this->moduleAccessor,lVar9,lVar10);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIDE_HELMET_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    FUN_710001de40(aLStack80,this);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar12);
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x141bd265ac);
    uVar8 = lib::L2CValue::as_integer(aLStack144);
    uVar11 = lib::L2CValue::as_integer(aLStack160);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar8,uVar11);
    lib::L2CValue::L2CValue(aLStack128,fVar12);
    uVar8 = lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar8 & 1) == 0) {
      FUN_710001de40(aLStack80,this);
      lib::L2CValue::L2CValue(aLStack112,true);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_MURABITO_BALLOON_INSTANCE_WORK_ID_FLAG_SINGLE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = lib::L2CValue::as_bool(aLStack112);
      iVar6 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::ArticleModule__set_flag_impl
                (this->moduleAccessor,iVar3,(bool)(bVar1 & 1),iVar6);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack128,0x12d2811ffd);
      uVar8 = lib::L2CValue::as_integer(aLStack112);
      uVar11 = lib::L2CValue::as_integer(aLStack128);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar8,uVar11);
      lib::L2CValue::L2CValue(aLStack80,fVar12);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME);
      fVar12 = (float)lib::L2CValue::as_number(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__add_float_impl(this->moduleAccessor,fVar12,iVar3);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar7 = aLStack112;
    }
    else {
      FUN_710001de40(aLStack80,this);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
      pLVar7 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar7);
    lib::L2CValue::L2CValue(aLStack80,_GROUND_CLIFF_CHECK_KIND_ALWAYS_BOTH_SIDES);
    lua2cpp::L2CFighterCommon::sub_fighter_cliff_check(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_FLAG_CLIFF_CHECK);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_FLAG_START);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MURABITO_STATUS_SPECIAL_HI_FLAG_CLIFF_CHECK);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_7100021ff8:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      iVar3 = 0;
      goto LAB_7100022074;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_HI_WAIT);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_7100021ff8;
  }
  iVar3 = 1;
LAB_7100022074:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

