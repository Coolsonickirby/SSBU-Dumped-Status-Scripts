
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::AirLassoLanding_main(L2CFighterLucas *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_LandingSub(this);
  lua2cpp::L2CFighterCommon::status_LandingStiffness(this);
  lib::L2CValue::L2CValue(aLStack80,0x116bdd21b7);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI2);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCAS_GENERATE_ARTICLE_HIMOHEBI);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    HVar4 = app::lua_bind::ArticleModule__motion_kind_impl(this->moduleAccessor,iVar2,1);
    lib::L2CValue::L2CValue(aLStack96,HVar4);
    lib::L2CValue::L2CValue(aLStack80,0x7aa779117);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_7100011bc0;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCAS_STATUS_AIR_LASSO_LANDING_FLAG_HIMOHEBI_REVERSE)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    this_00 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_LUCAS_HIMOHEBI2_STATUS_KIND_REWIND);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack96;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100011bc0:
  lib::L2CValue::L2CValue(aLStack80,AirLassoLanding_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

