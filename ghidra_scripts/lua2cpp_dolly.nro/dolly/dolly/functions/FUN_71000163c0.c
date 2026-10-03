
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000163c0(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STATUS_SPECIAL_LW_WORK_INT_START_SITUATION);
  iVar2 = lib::L2CValue::as_integer(this);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STRENGTH_S);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_INT_STRENGTH);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::L2CValue(aLStack80,3);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_customize_no_impl(param_2->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(param_2,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,true);
  FUN_7100016880(param_2,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_DOLLY_STATUS_SPECIAL_COMMON_WORK_FLAG_COMMAND);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_07);
    lib::L2CValue::operator=(aLStack80,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack144,0x11af990ec3);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack64,fVar6);
    fVar6 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::AttackModule__set_power_mul_status_impl(param_2->moduleAccessor,fVar6);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_08);
    lib::L2CValue::operator=(aLStack80,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack128,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack144,1);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack64,1);
  lib::L2CValue::operator-(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack192);
  app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)param_2,1);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack208,FUN_7100016e50);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

