
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021470(L2CAgent *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  Hash40 HVar5;
  Hash40 HVar6;
  ulong uVar7;
  float fVar8;
  int in_stack_ffffffffffffff14;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 uStack96;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,0x99dd17c80);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xdc0f87811);
  lVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  lVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::VisibilityModule__set_int64_impl(param_1->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack64,_WEAPON_WIIFIT_HULAHOOP_INSTANCE_WORK_ID_FLAG_VIS_OFF_1);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&uStack64);
  app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue(aLStack176,0x11ff036038);
  lib::L2CValue::L2CValue(aLStack192,0x99dd17c80);
  HVar5 = lib::L2CValue::as_hash(aLStack176);
  HVar6 = lib::L2CValue::as_hash(aLStack192);
  uStack104 = _FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_WALL_JUMP;
  local_70 = FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ATTACK;
  uStack96 = local_70;
  uStack88 = uStack104;
  local_50 = local_70;
  uStack72 = uStack104;
  uStack64 = local_70;
  uStack56 = uStack104;
  uVar2 = app::lua_bind::EffectModule__req_on_joint_impl
                    (param_1->moduleAccessor,HVar5,HVar6,(Vector3f *)&uStack64,(Vector3f *)&local_50
                     ,1.0,(Vector3f *)&uStack96,(Vector3f *)&local_70,false,0,
                     in_stack_ffffffffffffff14,0);
  lib::L2CValue::L2CValue(aLStack160,uVar2);
  lib::L2CValue::operator=(aLStack128,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  fVar8 = (float)app::lua_bind::PostureModule__scale_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,fVar8);
  lib::L2CValue::operator=(aLStack144,(L2CValue *)&uStack64);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
  lib::L2CValue::L2CValue((L2CValue *)&uStack64,_EFFECT_HANDLE_NULL);
  uVar7 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&uStack64);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&uStack64,MA_MSC_EFFECT_SET_SCALE);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&uStack64);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    lib::L2CAgent::push_lua_stack(param_1,aLStack144);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&uStack64);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

