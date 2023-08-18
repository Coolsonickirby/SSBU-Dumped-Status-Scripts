
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::FinalReady_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  uchar uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Fighter *pFVar7;
  float fVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_FINAL_FLAG_READY_START_SLOW);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack128,0x1ca5ea17aa);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack144,0x1413b2ed75);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar2 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::SlowModule__set_whole_impl(this->moduleAccessor,uVar2,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_BUDDY_STATUS_FINAL_FLAG_READY_START_SLOW);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack160,0x1542024ccc);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::L2CValue(aLStack96,2);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar4 = lib::L2CValue::operator__(aLStack112,pLVar6);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_FINAL_FLAG_CLEAR_SLOW);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack144,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack160,0x1542024ccc);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  uVar4 = lib::L2CValue::operator__(pLVar6,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_FINAL_FLAG_CLEAR_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_FINAL_MODULE_READY_EXIT_PRE);
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::FighterSpecializer_Buddy::call_final_module(pFVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack128,0x1542024ccc);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar4 = lib::L2CValue::operator__(aLStack96,pLVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_KIND_FINAL_SCENE01);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

