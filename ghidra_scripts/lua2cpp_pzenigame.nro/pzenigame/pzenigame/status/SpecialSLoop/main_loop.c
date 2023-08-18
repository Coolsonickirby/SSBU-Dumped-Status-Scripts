
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPzenigame::status::SpecialSLoop_main_loop
          (L2CFighterPzenigame *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  undefined8 uVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PZENIGAME_STATUS_SPECIAL_S_INT_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0xff07fa6c0);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PZENIGAME_STATUS_SPECIAL_S_INT_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack128,0xfcc729999);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x20);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N);
      lib::L2CValue::operator_(pLVar6,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PZENIGAME_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack80,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0xb0);
        goto LAB_7100009238;
      }
      lib::L2CValue::L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = app::lua_bind::KineticModule__get_sum_speed_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,(float)uVar8);
      lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar8 >> 0x20));
      lib::L2CValue::operator_(aLStack80,aLStack160);
      lib::L2CValue::operator_(aLStack96,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      uVar4 = lib::L2CValue::operator_(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::operator_(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,1.0);
      }
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
      lib::L2CValue::operator_(pLVar6,aLStack112);
      lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack192,0xbdf5eda73);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar7);
      uVar4 = lib::L2CValue::operator__(aLStack160,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PZENIGAME_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack176,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        return;
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack160,false);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) != 0) {
      this_00 = &this->globalTable;
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar6,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) == 0) {
LAB_710000964c:
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar6,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar4 & 1) != 0) goto LAB_7100009684;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack160,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator__(pLVar6,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_710000968c;
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
        lib::L2CValue::L2CValue(aLStack160,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar6,aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar4 & 1) == 0) goto LAB_710000964c;
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack160,false);
      lib::L2CValue::L2CValue(aLStack80,0x976c3b29b);
      lib::L2CValue::L2CValue(aLStack96,0xd2b3a620b);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_PZENIGAME_SPECIAL_S);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_TYPE_PZENIGAME_SPECIAL_AIR_S);
      FUN_7100008380(this,aLStack160,aLStack80,aLStack96,aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      goto LAB_7100009238;
    }
LAB_7100009684:
    pLVar6 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PZENIGAME_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0xb0);
LAB_7100009238:
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar6 = aLStack160;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710000968c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

