
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRyu::status::FinalFall_main_loop(L2CFighterRyu *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  int iVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack80);
LAB_710003f70c:
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator__(pLVar4,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lua2cpp::L2CFighterCommon::sub_rocketbelt_hover_check(this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((bVar1 & 1U) == 0) {
          lua2cpp::L2CFighterCommon::sub_transition_group_check_air_special(this);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((bVar1 & 1U) == 0) {
            lua2cpp::L2CFighterCommon::sub_transition_group_check_air_item_throw(this);
            bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
            lib::L2CValue::_L2CValue(aLStack64);
            if ((bVar1 & 1U) == 0) {
              lua2cpp::L2CFighterCommon::sub_transition_group_check_air_escape(this);
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
              lib::L2CValue::_L2CValue(aLStack64);
              if ((bVar1 & 1U) == 0) {
                lua2cpp::L2CFighterCommon::sub_transition_group_check_air_attack(this);
                bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
                lib::L2CValue::_L2CValue(aLStack64);
                if ((bVar1 & 1U) == 0) {
                  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_tread_jump(this);
                  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
                  lib::L2CValue::_L2CValue(aLStack64);
                  if ((bVar1 & 1U) == 0) {
                    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_wall_jump(this);
                    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
                    lib::L2CValue::_L2CValue(aLStack64);
                    if ((bVar1 & 1U) == 0) {
                      lua2cpp::L2CFighterCommon::sub_transition_group_check_air_jump_aerial(this);
                      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
                      lib::L2CValue::_L2CValue(aLStack64);
                      if ((bVar1 & 1U) == 0) {
                        FUN_710003f9b0(this);
                        iVar5 = 0;
                        goto LAB_710003f8dc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_710003f8d4;
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_FINAL_LANDING);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar4 = aLStack64;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar3 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar3 = lib::L2CValue::operator__(aLStack128,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) goto LAB_710003f8d4;
        goto LAB_710003f70c;
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar4 = aLStack80;
    }
    lib::L2CValue::_L2CValue(pLVar4);
  }
LAB_710003f8d4:
  iVar5 = 1;
LAB_710003f8dc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

