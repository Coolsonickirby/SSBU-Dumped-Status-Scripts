
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLittlemac::status::FinalHit_main_loop(L2CFighterLittlemac *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  int iVar10;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
LAB_71000140b0:
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      this_00 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
        uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar7 & 1) == 0) goto LAB_7100014020;
        lib::L2CValue::_L2CValue(aLStack112);
LAB_7100014098:
        lib::L2CValue::L2CValue(aLStack112,false);
        FUN_7100013ae0(this,aLStack112);
        goto LAB_71000140b0;
      }
LAB_7100014020:
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) goto LAB_71000140b0;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar7 & 1) != 0) goto LAB_7100014098;
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LITTLEMAC_STATUS_FINAL_FLAG_ATTACK_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) goto LAB_710001434c;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SLOW_KIND_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::SlowModule__frame_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack96,1);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar7 & 1) == 0) goto LAB_710001434c;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_INT_ATTACK_HIT_NUM);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if (-1 < iVar3) {
      iVar10 = -1;
      do {
        lib::L2CValue::L2CValue
                  (aLStack144,
                   iVar10 + _FIGHTER_LITTLEMAC_STATUS_FINAL_WORK_INT_ATTACK_HIT_OBJECT_ID + 1);
        iVar4 = lib::L2CValue::as_integer(aLStack144);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack96,iVar4);
        lib::L2CValue::_L2CValue(aLStack144);
        uVar5 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = app::sv_battle_object::is_null(uVar5);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        lib::L2CValue::operator_(aLStack160);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::_L2CValue(aLStack144);
          pLVar6 = aLStack160;
LAB_71000142f4:
          lib::L2CValue::_L2CValue(pLVar6);
        }
        else {
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          bVar1 = app::sv_battle_object::is_active(uVar5);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          if ((bVar2 & 1U) != 0) {
            uVar5 = lib::L2CValue::as_integer(aLStack96);
            pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar5);
            if (pvVar8 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack144,pvVar8);
            }
            pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
            app::lua_bind::SlowModule__clear_impl(pBVar9);
            pLVar6 = aLStack144;
            goto LAB_71000142f4;
          }
        }
        lib::L2CValue::_L2CValue(aLStack96);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar3);
    }
    pLVar6 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LITTLEMAC_STATUS_FINAL_FLAG_ATTACK_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LITTLEMAC_STATUS_KIND_FINAL_ATTACK);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710001434c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

