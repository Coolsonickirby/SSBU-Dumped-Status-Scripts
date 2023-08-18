
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGekkougaGekkougas::status::FinalEnd_main
          (L2CWeaponGekkougaGekkougas *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  BattleObjectModuleAccessor *pBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,20.0);
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_START_FRAME);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_GEKKOUGA_GEKKOUGAS_STATUS_KIND_FINAL_ATTACK);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_LINK_NO_CONSTRAINT);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::LinkModule__get_parent_situation_kind_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      fVar11 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xaa1329c9f);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      fVar11 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar7 = lib::L2CValue::as_hash(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0xf8e27ea85);
  lib::L2CValue::L2CValue(aLStack128,0xfdd4fcc40);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  uVar8 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_INT_BLACKOUT_FRAME)
  ;
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
    GVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack112,0x1d48fa99a0);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  HVar7 = lib::L2CValue::as_hash(aLStack112);
  app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar2,HVar7);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  lib::L2CValue::L2CValue(aLStack96,false);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::WeaponSpecializer_GekkougaGekkougaS::set_link_final_end(pBVar9,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FinalEnd_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

