
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN_pre(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  ulong uVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar4 = lib::L2CValue::as_integer(pLVar6);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N3_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar4);
    goto LAB_7100091bc4;
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_TABLE_RECREATE_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_CONTROL_PAD_BUTTON_GUARD);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_RECREATE_TABLE);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      return;
    }
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_DISABLE_CRAFT_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar7 = lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    bVar2 = app::FighterSpecializer_Pickel::is_find_table(pBVar8);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      FUN_710005e930(aLStack112,this);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
      uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      iVar4 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
      if ((uVar7 & 1) == 0) {
        if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
          iVar5 = 0;
          do {
            lib::L2CValue::L2CValue(aLStack112,iVar5);
            FUN_710005ef10(aLStack96,this,aLStack112);
            bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            if ((bVar3 & 1U) != 0) goto LAB_7100091a7c;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
          goto LAB_7100091980;
        }
      }
      else {
LAB_7100091980:
        iVar4 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
        if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
          iVar5 = 0;
          do {
            lib::L2CValue::L2CValue(aLStack144,iVar5);
            FUN_710005f400(aLStack128,this,aLStack144);
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
            uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack144);
            iVar1 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
            if ((uVar7 & 1) == 0) goto LAB_7100091a7c;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
          if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
            iVar4 = 0;
            do {
              lib::L2CValue::L2CValue(aLStack160,iVar4);
              FUN_710005fce0(aLStack128,this,aLStack160);
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
              uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack160);
              if ((uVar7 & 1) == 0) goto LAB_7100091a7c;
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar1);
          }
        }
      }
      bVar3 = false;
      goto LAB_7100091a84;
    }
  }
LAB_7100091af4:
  bVar3 = false;
  goto LAB_7100091afc;
LAB_7100091a7c:
  bVar3 = true;
LAB_7100091a84:
  lib::L2CValue::L2CValue(aLStack176,bVar3);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar7 = lib::L2CValue::operator__(aLStack176,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar7 & 1) != 0) goto LAB_7100091af4;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N2);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) goto LAB_7100091af4;
  bVar3 = true;
LAB_7100091afc:
  lib::L2CValue::L2CValue(aLStack192,bVar3);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar3 & 1U) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_WALK);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_WAIT);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar4);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_WALK);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar4);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N2);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar4);
  }
LAB_7100091bc4:
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack160,0x1d5e5c91ca);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  uVar9 = lib::L2CValue::as_integer(aLStack160);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar9);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar5 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,true);
  return;
}

