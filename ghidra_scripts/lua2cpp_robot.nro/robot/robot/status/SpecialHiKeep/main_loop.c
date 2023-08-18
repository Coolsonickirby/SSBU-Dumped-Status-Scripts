
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialHiKeep_main_loop(L2CFighterRobot *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  void *pvVar7;
  L2CValue *pLVar8;
  KineticEnergy *pKVar9;
  ulong uVar10;
  KineticEnergyNormal *pKVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong local_a0;
  undefined8 uStack152;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((bVar1 & 1U) == 0) {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_item_throw(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((bVar1 & 1U) == 0) {
      lua2cpp::L2CFighterCommon::sub_transition_group_check_air_attack(this);
      bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      if ((bVar1 & 1U) == 0) {
        lua2cpp::L2CFighterCommon::sub_transition_group_check_air_jump_aerial(this);
        bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        if ((bVar1 & 1U) == 0) {
          lua2cpp::L2CFighterCommon::sub_transition_group_check_air_escape(this);
          bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_TRANSITION_TERM_ID_LANDING);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                              (this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack96);
            }
            else {
              pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,_SITUATION_KIND_GROUND);
              uVar6 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_a0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack96);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_STATUS_KIND_LANDING);
                lib::L2CValue::L2CValue(aLStack80,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0xb0);
                lib::L2CValue::_L2CValue(aLStack80);
                lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
                goto LAB_710001a110;
              }
            }
            lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_LEFT);
            uVar4 = lib::L2CValue::as_integer(aLStack80);
            bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
            lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar2 & 1));
            bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
            if ((bVar1 & 1U) == 0) {
              lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_RIGHT);
              uVar4 = lib::L2CValue::as_integer(aLStack112);
              bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
              lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack112);
              lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((bVar1 & 1U) != 0) goto LAB_710001a2b0;
            }
            else {
              lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::_L2CValue(aLStack80);
LAB_710001a2b0:
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
              pvVar7 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                         (this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack80,pvVar7);
              lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::L2CValue(aLStack112,0.0);
              lib::L2CValue::L2CValue(aLStack128,0.0);
              lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
              pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
              pKVar9 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack80);
              uVar13 = app::lua_bind::KineticEnergy__get_speed_impl(pKVar9);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,(float)uVar13);
              lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar13 >> 0x20));
              lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_a0);
              lib::L2CValue::operator_(pLVar8,aLStack144);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
              pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
              lib::L2CValue::operator_(pLVar5);
              lib::L2CValue::L2CValue(aLStack208,0x1086bc4a93);
              lib::L2CValue::L2CValue(aLStack224,0x1b21abfe2b);
              uVar6 = lib::L2CValue::as_integer(aLStack208);
              uVar10 = lib::L2CValue::as_integer(aLStack224);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (this->moduleAccessor,uVar6,uVar10);
              lib::L2CValue::L2CValue(aLStack192,fVar12);
              lib::L2CValue::operator_(aLStack176,aLStack192);
              pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
              lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_a0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack224);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack176);
              pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
              pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
              uVar6 = lib::L2CValue::as_number(pLVar5);
              uVar4 = lib::L2CValue::as_number(pLVar8);
              local_a0 = uVar6 & 0xffffffff | (ulong)uVar4 << 0x20;
              uStack152 = 0;
              pKVar11 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack80);
              app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar11,(Vector2f *)&local_a0);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack80);
            }
            iVar3 = 0;
            goto LAB_710001a118;
          }
        }
      }
    }
  }
LAB_710001a110:
  iVar3 = 1;
LAB_710001a118:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

