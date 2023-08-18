
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::SpecialSJump_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) {
    iVar5 = 1;
    goto LAB_7100026f00;
  }
  bVar4 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar4 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100026cbc:
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar7,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    cVar1 = (char)&stack0xfffffffffffffff0;
    if ((uVar6 & 1) == 0) {
      bVar4 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar3 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DIDDY_STATUS_MONKEY_FLIP_WORK_INT_KICK_FRAME);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::L2CValue(aLStack96,iVar5);
        lib::L2CValue::L2CValue(aLStack160,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack176,0x16809f3176);
        uVar6 = lib::L2CValue::as_integer(aLStack160);
        uVar8 = lib::L2CValue::as_integer(aLStack176);
        iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
        lib::L2CValue::L2CValue(aLStack144,iVar5);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack144);
        if ((uVar6 & 1) == 0) {
          bVar4 = 0;
        }
        else {
          pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1f);
          lib::L2CValue::L2CValue
                    (aLStack80,FIGHTER_PAD_FLAG_SPECIAL_TRIGGER | _FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
          lib::L2CValue::operator_(pLVar7,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack192);
          lib::L2CValue::_L2CValue(aLStack192);
        }
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar4 & 1) == 0) goto LAB_7100026ef8;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_KICK);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_S_FLIP_LANDING);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status
                (this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50));
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
LAB_7100026ef4:
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lVar2 = -0x50;
      goto LAB_7100026ef4;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_7100026cbc;
  }
LAB_7100026ef8:
  iVar5 = 0;
LAB_7100026f00:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

