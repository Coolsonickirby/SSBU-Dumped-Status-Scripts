
void FUN_7100043760(L2CAgent *param_1)

{
  int iVar1;
  Hash40 HVar2;
  float fVar3;
  uint uVar4;
  ulong uVar5;
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
  
  lib::L2CValue::L2CValue(aLStack128,0xfa06bb067);
  fVar3 = (float)app::lua_bind::PostureModule__pos_x_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar3);
  fVar3 = (float)app::lua_bind::PostureModule__pos_y_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar3);
  fVar3 = (float)app::lua_bind::PostureModule__pos_z_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar3);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,1.0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  HVar2 = lib::L2CValue::as_hash(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack144);
  lVar6 = lib::L2CValue::as_number(aLStack160);
  uVar4 = lib::L2CValue::as_number(aLStack176);
  local_50 = uVar5 & 0xffffffff | lVar6 << 0x20;
  uStack72 = (ulong)uVar4;
  uVar5 = lib::L2CValue::as_number(aLStack192);
  lVar6 = lib::L2CValue::as_number(aLStack208);
  uVar4 = lib::L2CValue::as_number(aLStack224);
  local_60 = uVar5 & 0xffffffff | lVar6 << 0x20;
  uStack88 = (ulong)uVar4;
  fVar3 = (float)lib::L2CValue::as_number(aLStack240);
  uVar4 = lib::L2CValue::as_integer(aLStack256);
  iVar1 = lib::L2CValue::as_integer(aLStack272);
  uVar4 = app::lua_bind::EffectModule__req_impl
                    (param_1->moduleAccessor,HVar2,(Vector3f *)&local_50,(Vector3f *)&local_60,fVar3
                     ,uVar4,iVar1,false,0);
  lib::L2CValue::L2CValue(aLStack112,uVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x199c462b5d);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_50);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  return;
}

