
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100000d80(L2CValue *param_1,L2CAgent *param_2)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar2 = lib::L2CValue::operator<=((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)app::lua_bind::PostureModule__pos_x_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar4);
    fVar4 = (float)app::lua_bind::PostureModule__pos_y_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    fVar4 = (float)app::lua_bind::PostureModule__pos_z_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar4);
    lib::L2CValue::L2CValue(aLStack176,0x15cc86be2b);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,1.0);
    lib::L2CValue::L2CValue(aLStack256,EFFECT_SUB_ATTRIBUTE_NONE);
    lib::L2CValue::L2CValue(aLStack272,-1);
    HVar3 = lib::L2CValue::as_hash(aLStack176);
    uVar2 = lib::L2CValue::as_number(aLStack112);
    lVar6 = lib::L2CValue::as_number(aLStack128);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    local_50 = uVar2 & 0xffffffff | lVar6 << 0x20;
    uStack72 = (ulong)uVar5;
    uVar2 = lib::L2CValue::as_number(aLStack192);
    lVar6 = lib::L2CValue::as_number(aLStack208);
    uVar5 = lib::L2CValue::as_number(aLStack224);
    local_60 = uVar2 & 0xffffffff | lVar6 << 0x20;
    uStack88 = (ulong)uVar5;
    fVar4 = (float)lib::L2CValue::as_number(aLStack240);
    uVar5 = lib::L2CValue::as_integer(aLStack256);
    iVar1 = lib::L2CValue::as_integer(aLStack272);
    uVar5 = app::lua_bind::EffectModule__req_impl
                      (param_2->moduleAccessor,HVar3,(Vector3f *)&local_50,(Vector3f *)&local_60,
                       fVar4,uVar5,iVar1,false,0);
    lib::L2CValue::L2CValue(aLStack160,uVar5);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_50);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

