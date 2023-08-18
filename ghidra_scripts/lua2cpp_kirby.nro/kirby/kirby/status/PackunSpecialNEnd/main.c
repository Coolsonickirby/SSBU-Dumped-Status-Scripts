
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PackunSpecialNEnd_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_PACKUN_SPECIAL_N_SHOOT);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_STATUS_SPECIAL_N_WORK_FLAG_END_PREVIOUS_SHOOT)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x11c0a0c60e);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar8 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xd20cd6527);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar8 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_LINK_NO_CONSTRAINT);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_71000e1828;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PACKUN_GENERATE_ARTICLE_SPIKEBALL);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACKUN_SPIKEBALL_STATUS_KIND_END);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar3,iVar5,0);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_71000e1828:
  lib::L2CValue::L2CValue(aLStack96,PackunSpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

