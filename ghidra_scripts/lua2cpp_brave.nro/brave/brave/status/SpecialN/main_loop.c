
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialN_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0xf3a6aace3);
  lib::L2CValue::L2CValue(aLStack112,0x1331f32137);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,aLStack128);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(this,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  FUN_710000b590(aLStack224,this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_SPECIAL_N_L);
  uVar4 = lib::L2CValue::operator__(aLStack224,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_N_SHOOT);
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000300d8;
  }
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack80,1);
  uVar4 = lib::L2CValue::operator__(aLStack80,pLVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_SPECIAL_TRIGGER);
    lib::L2CValue::operator_(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    if ((bVar1 & 1U) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
      lib::L2CValue::operator_(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      if ((bVar1 & 1U) == 0) goto LAB_7100030054;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_TO_SHOOT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
LAB_7100030054:
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_N_HOLD);
    lib::L2CValue::L2CValue(aLStack224,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x20);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_71000300d8:
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

