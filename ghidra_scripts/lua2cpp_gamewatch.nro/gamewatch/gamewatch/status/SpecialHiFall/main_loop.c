
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialHiFall_main_loop
          (L2CFighterGamewatch *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
LAB_710002c564:
      lua2cpp::L2CFighterCommon::sub_transition_group_check_air_special(this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lua2cpp::L2CFighterCommon::sub_transition_group_check_air_attack(this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) {
          this_00 = &this->globalTable;
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar3 = lib::L2CValue::operator__(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar3 & 1) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
            lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack128,0xd87461d6d);
            uVar3 = lib::L2CValue::as_integer(aLStack112);
            uVar5 = lib::L2CValue::as_integer(aLStack128);
            fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar3,uVar5);
            lib::L2CValue::L2CValue(aLStack96,fVar7);
            uVar3 = lib::L2CValue::operator__(pLVar4,aLStack96);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
            }
            else {
              fVar7 = (float)app::lua_bind::ControlModule__get_stick_prev_y_impl
                                       (this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack160,fVar7);
              lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
              lib::L2CValue::L2CValue(aLStack208,0xd87461d6d);
              uVar3 = lib::L2CValue::as_integer(aLStack192);
              uVar5 = lib::L2CValue::as_integer(aLStack208);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar3,uVar5);
              lib::L2CValue::L2CValue(aLStack176,fVar7);
              uVar3 = lib::L2CValue::operator_(aLStack176,aLStack160);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar3 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_HI_CLOSE);
                lib::L2CValue::L2CValue(aLStack112,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
                goto LAB_710002c61c;
              }
            }
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
            lib::L2CValue::L2CValue(aLStack112,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack128,0xcce8375ba);
            uVar3 = lib::L2CValue::as_integer(aLStack112);
            uVar5 = lib::L2CValue::as_integer(aLStack128);
            fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar3,uVar5);
            lib::L2CValue::L2CValue(aLStack96,fVar7);
            uVar3 = lib::L2CValue::operator__(aLStack96,pLVar4);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
            }
            else {
              fVar7 = (float)app::lua_bind::ControlModule__get_stick_prev_y_impl
                                       (this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack160,fVar7);
              lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
              lib::L2CValue::L2CValue(aLStack208,0xcce8375ba);
              uVar3 = lib::L2CValue::as_integer(aLStack192);
              uVar5 = lib::L2CValue::as_integer(aLStack208);
              fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (this->moduleAccessor,uVar3,uVar5);
              lib::L2CValue::L2CValue(aLStack176,fVar7);
              uVar3 = lib::L2CValue::operator_(aLStack160,aLStack176);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack192);
              lib::L2CValue::_L2CValue(aLStack160);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::_L2CValue(aLStack112);
              if ((uVar3 & 1) != 0) {
                lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_HI_CLOSE);
                lib::L2CValue::L2CValue(aLStack112,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
                goto LAB_710002c61c;
              }
            }
            iVar6 = 0;
            goto LAB_710002c64c;
          }
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_STATUS_KIND_SPECIAL_HI_CLOSE);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
LAB_710002c61c:
          lib::L2CValue::_L2CValue(aLStack112);
          pLVar4 = aLStack96;
          goto LAB_710002c640;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar3 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar3 = lib::L2CValue::operator__(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) goto LAB_710002c644;
        goto LAB_710002c564;
      }
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar4 = aLStack112;
LAB_710002c640:
      lib::L2CValue::_L2CValue(pLVar4);
    }
  }
LAB_710002c644:
  iVar6 = 1;
LAB_710002c64c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar6);
  return;
}

