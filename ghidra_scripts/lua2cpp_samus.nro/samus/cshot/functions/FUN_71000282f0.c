
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000282f0(L2CAgent *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  L2CValue aLStack304 [16];
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x128222d210);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,3);
  uVar1 = lib::L2CValue::as_integer(this);
  uVar1 = app::sv_battle_object::kind(uVar1);
  lib::L2CValue::L2CValue(aLStack96,uVar1);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_KIND_SAMUSD_CSHOT);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0x13ee774fe8);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_MA_MSC_EFFECT_REQUEST_FOLLOW);
  lib::L2CValue::L2CValue(aLStack128,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack144,7.98004);
  lib::L2CValue::L2CValue(aLStack160,-0.50584);
  lib::L2CValue::L2CValue(aLStack176,-0.25092);
  lib::L2CValue::L2CValue(aLStack192,-91.2728);
  lib::L2CValue::L2CValue(aLStack208,-1.7974);
  lib::L2CValue::L2CValue(aLStack224,176.373);
  lib::L2CValue::L2CValue(aLStack240,1.0);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  FUN_7100005870(aLStack112,param_1,aLStack64,aLStack80,aLStack128,aLStack144,aLStack160,aLStack176,
                 aLStack192,aLStack208,aLStack224,aLStack240,aLStack256,aLStack272,aLStack288,
                 aLStack304);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
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
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack128,_MA_MSC_EFFECT_GET_LAST_HANDLE);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  app::sv_module_access::effect(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_SAMUS_CSHOT_INSTANCE_WORK_ID_INT_EFH_BULLET);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(param_1->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

