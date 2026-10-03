
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000038c0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar2 & 1) == 0) goto LAB_7100003cc0;
  fVar5 = (float)app::lua_bind::MotionModule__frame_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar5);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  uVar2 = lib::L2CValue::operator<=(aLStack176,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) goto LAB_7100003cc0;
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar1);
  lib::L2CValue::L2CValue(aLStack176,0);
  uVar2 = lib::L2CValue::operator<=((L2CValue *)&local_50,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_50);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  iVar1 = app::lua_bind::GroundModule__get_touch_moment_flag_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::L2CValue(aLStack176,_GROUND_TOUCH_FLAG_LEFT);
  lib::L2CValue::operator&(aLStack112,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0);
  uVar2 = lib::L2CValue::operator==((L2CValue *)&local_50,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
LAB_7100003af8:
    pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,*pfVar3);
    lib::L2CValue::L2CValue(aLStack160,pfVar3[1]);
    lib::L2CValue::L2CValue(aLStack144,pfVar3[2]);
    FUN_7100004670(aLStack128,param_2,aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack192,0x15cff20136);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    HVar4 = lib::L2CValue::as_hash(aLStack192);
    uVar2 = lib::L2CValue::as_number(this);
    lVar7 = lib::L2CValue::as_number(this_00);
    uVar6 = lib::L2CValue::as_number(this_01);
    local_50 = uVar2 & 0xffffffff | lVar7 << 0x20;
    uStack72 = (ulong)uVar6;
    uStack88 = LUA_SCRIPT_LINE_STATUS_SHIFT;
    local_60 = LUA_SCRIPT_LINE_STATUS_SYSTEM;
    uVar6 = app::lua_bind::EffectModule__req_impl
                      (param_2->moduleAccessor,HVar4,(Vector3f *)&local_50,(Vector3f *)&local_60,1.0
                       ,0,-1,false,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,uVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack192);
    app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,GROUND_TOUCH_FLAG_RIGHT);
    lib::L2CValue::operator&(aLStack112,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,0);
    uVar2 = lib::L2CValue::operator==((L2CValue *)&local_60,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) == 0) goto LAB_7100003af8;
  }
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100003cc0:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

