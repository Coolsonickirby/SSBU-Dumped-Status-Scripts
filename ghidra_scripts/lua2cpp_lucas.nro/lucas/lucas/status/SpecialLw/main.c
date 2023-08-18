
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucas::status::SpecialLw_main(L2CFighterLucas *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 uStack80;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,0x337a94cab8);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_HAVE_ITEM_WORK_MAIN);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x46f949845);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCAS_STATUS_SPECIAL_LW_WORK_INT_TIME);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0xbd14ca50d);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCAS_STATUS_SPECIAL_LW_WORK_INT_STOP_Y_TIME);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,_FIGHTER_LUCAS_STATUS_SPECIAL_LW_FLAG_MOT_CHANGE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&uStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  FUN_7100020850(this);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0xae635c21e);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack192,0xa5e89a57b);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::L2CValue(aLStack208,1.0);
    uVar8 = lib::L2CValue::as_number(aLStack112);
    uVar9 = lib::L2CValue::as_number(aLStack160);
    uVar10 = lib::L2CValue::as_number(aLStack208);
    uStack80 = CONCAT44(uVar9,uVar8);
    uStack72 = (ulong)uVar10;
    app::lua_bind::KineticModule__mul_speed_impl(this->moduleAccessor,(Vector3f *)&uStack80,-1);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_71000126f0(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,&DAT_7100012a50);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&uStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  lib::L2CValue::L2CValue((L2CValue *)&uStack80,SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack80);
  return;
}

