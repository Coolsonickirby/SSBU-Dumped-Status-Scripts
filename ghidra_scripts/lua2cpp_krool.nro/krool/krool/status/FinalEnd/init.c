
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKrool::status::FinalEnd_init(L2CFighterKrool *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x241f276a2e);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_40);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  iVar1 = app::sv_information::stage_id();
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_DAT_710018c17c);
  uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_FINAL_START_POS_X);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack96,fVar3);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KROOL_INSTANCE_WORK_ID_FLOAT_FINAL_START_POS_Y);
    iVar1 = lib::L2CValue::as_integer(aLStack144);
    fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack128,fVar3);
    uVar4 = lib::L2CValue::as_number(aLStack96);
    uVar5 = lib::L2CValue::as_number(aLStack128);
    local_40 = CONCAT44(uVar5,uVar4);
    uStack56 = 0;
    app::lua_bind::GroundModule__set_correct_pos_impl(this->moduleAccessor,(Vector2f *)&local_40);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

