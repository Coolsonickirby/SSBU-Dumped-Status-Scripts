
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialSStick_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar5 = lib::L2CValue::operator_(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) != 0) {
      iVar3 = 1;
      goto LAB_71000263ac;
    }
    lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_JUMP);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
          lib::L2CValue::L2CValue(aLStack96,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack112,0xcce8375ba);
          uVar5 = lib::L2CValue::as_integer(aLStack96);
          uVar6 = lib::L2CValue::as_integer(aLStack112);
          fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack80,fVar7);
          uVar5 = lib::L2CValue::operator__(aLStack80,pLVar4);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
          }
          else {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1d);
            lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack160,0xc14e04625);
            uVar5 = lib::L2CValue::as_integer(aLStack144);
            uVar6 = lib::L2CValue::as_integer(aLStack160);
            iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
            lib::L2CValue::L2CValue(aLStack128,iVar3);
            uVar5 = lib::L2CValue::operator_(pLVar4,aLStack128);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_JUMP);
              lib::L2CValue::L2CValue(aLStack96,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
              goto LAB_7100026394;
            }
          }
          app::lua_bind::CatchModule__update_pos_cling_impl(this->moduleAccessor);
          goto LAB_71000263a4;
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_JUMP);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_ATTACK);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_STICK_ATTACK);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
LAB_7100026394:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_71000263a4:
  iVar3 = 0;
LAB_71000263ac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

