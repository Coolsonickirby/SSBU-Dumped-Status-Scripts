
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNRollAir_main_loop(L2CFighterPurin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  BattleObjectModuleAccessor **ppBVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND);
      GVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
    }
    ppBVar9 = &this->moduleAccessor;
    lib::L2CValue::_L2CValue(aLStack80);
    FUN_7100023ad0(this);
    iVar4 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,iVar4);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
    uVar5 = lib::L2CValue::as_integer(pLVar6);
    uVar5 = app::sv_battle_object::kind(uVar5);
    lib::L2CValue::L2CValue(aLStack112,uVar5);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CHANGE_STATUS);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
        uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_ROLL);
          lib::L2CValue::L2CValue(aLStack144,false);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          bVar2 = app::lua_bind::StatusModule__change_status_request_impl
                            (*ppBVar9,iVar4,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        }
        else {
          lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_ROLL);
          lib::L2CValue::L2CValue(aLStack144,false);
          iVar4 = lib::L2CValue::as_integer(aLStack128);
          bVar2 = lib::L2CValue::as_bool(aLStack144);
          bVar2 = app::lua_bind::StatusModule__change_status_request_impl
                            (*ppBVar9,iVar4,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        }
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
        app::FighterSpecializer_Purin::special_n_set_power(pBVar8);
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CHANGE_STATUS);
        iVar4 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::_L2CValue(aLStack128);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
        app::FighterSpecializer_Purin::special_n_req_effect_dash_smoke(pBVar8);
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

