
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterZelda::status::FinalLoop_main_loop(L2CFighterZelda *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor **ppBVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  uVar8 = lib::L2CValue::operator__(pLVar6,pLVar7);
  if ((uVar8 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar8 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xe64166e68);
      HVar9 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar9,-1.0,1.0,0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      ppBVar10 = &this->moduleAccessor;
      app::lua_bind::GroundModule__correct_impl(*ppBVar10,GVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0xa627d8baf);
      HVar9 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (*ppBVar10,HVar9,-1.0,1.0,0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack80);
  }
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::SlowModule__is_skip_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack96);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
LAB_710000c390:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ZELDA_STATUS_FINAL_FLAG_SEAL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710000c424;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ZELDA_STATUS_KIND_FINAL_FINISH);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ZELDA_STATUS_FINAL_WORK_INT_TRIFORCE_LIFE);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar10,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_ZELDA_STATUS_FINAL_FLAG_HIT);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack112);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      goto LAB_710000c390;
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_ZELDA_STATUS_FINAL_WORK_INT_TRIFORCE_LIFE);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar8 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) == 0) goto LAB_710000c390;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ZELDA_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ZELDA_GENERATE_ARTICLE_TRIFORCE);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ZELDA_TRIFORCE_STATUS_KIND_FAILURE);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    iVar5 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::ArticleModule__change_status_exist_impl(*ppBVar10,iVar4,iVar5);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar6 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710000c424:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

