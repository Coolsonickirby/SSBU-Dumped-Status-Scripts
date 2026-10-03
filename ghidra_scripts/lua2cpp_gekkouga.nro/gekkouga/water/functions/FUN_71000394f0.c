
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000394f0(L2CAgent *param_1,undefined8 param_2,ulong *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  ulong *this;
  Hash40 HVar5;
  L2CValue *pLVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  ulong auStack192 [2];
  ulong local_b0;
  ulong uStack168;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  BattleObject *pBStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,5);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
  app::lua_bind::EffectModule__detach_all_impl(param_1->moduleAccessor,uVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  fVar7 = (float)app::lua_bind::PostureModule__pos_x_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  fVar7 = (float)app::lua_bind::PostureModule__pos_y_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_UP);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_LEFT);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_RIGHT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack240);
          uVar8 = app::sv_kinetic_energy::get_speed(param_1->luaStateAgent);
          lib::L2CValue::L2CValue(aLStack224,(float)uVar8);
          lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar8 >> 0x20));
          lib::L2CValue::L2CValue((L2CValue *)&local_b0,aLStack224);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,aLStack208);
          param_3 = &local_50;
          lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0x50,SUB81(param_3,0));
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack240);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack192,0x18cdc1683);
          lib::L2CValue::operator-(pLVar6);
          lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_b0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack192,0x1fbdb2615);
          lib::L2CValue::operator-(pLVar6);
          lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_b0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
          this = auStack192;
          goto LAB_7100039a0c;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_RIGHT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        pfVar4 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                    (param_1->moduleAccessor,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,*pfVar4);
        lib::L2CValue::L2CValue(aLStack160,pfVar4[1]);
        lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_b0);
        lib::L2CValue::operator=(aLStack112,aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_RIGHT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        uVar8 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,(float)uVar8);
        lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar8 >> 0x20));
        lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_b0);
        lib::L2CValue::operator=(aLStack144,aLStack160);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_LEFT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        pfVar4 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                    (param_1->moduleAccessor,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,*pfVar4);
        lib::L2CValue::L2CValue(aLStack160,pfVar4[1]);
        lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_b0);
        lib::L2CValue::operator=(aLStack112,aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_LEFT);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        uVar8 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_b0,(float)uVar8);
        lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar8 >> 0x20));
        lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_b0);
        lib::L2CValue::operator=(aLStack144,aLStack160);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      pfVar4 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl
                                  (param_1->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,*pfVar4);
      lib::L2CValue::L2CValue(aLStack160,pfVar4[1]);
      lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_b0);
      lib::L2CValue::operator=(aLStack112,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar8 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_b0,(float)uVar8);
      lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar8 >> 0x20));
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_b0);
      lib::L2CValue::operator=(aLStack144,aLStack160);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_UP);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    pfVar4 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(param_1->moduleAccessor,uVar3)
    ;
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,*pfVar4);
    lib::L2CValue::L2CValue(aLStack160,pfVar4[1]);
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_b0);
    lib::L2CValue::operator=(aLStack112,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_TOUCH_FLAG_UP);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar8 = app::lua_bind::GroundModule__get_touch_normal_impl(param_1->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,(float)uVar8);
    lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar8 >> 0x20));
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_b0);
    lib::L2CValue::operator=(aLStack144,aLStack160);
  }
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  this = &local_50;
LAB_7100039a0c:
  lib::L2CValue::~L2CValue((L2CValue *)this);
  lib::L2CAgent::math_atan((L2CAgent *)aLStack128,aLStack144,(L2CValue *)param_3);
  lib::L2CValue::L2CValue(aLStack240,0x1294fbf0c0);
  fVar7 = (float)app::lua_bind::PostureModule__pos_z_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,fVar7);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::operator-((L2CValue *)auStack192);
  HVar5 = lib::L2CValue::as_hash(aLStack240);
  uVar9 = lib::L2CValue::as_number(aLStack96);
  lVar10 = lib::L2CValue::as_number(aLStack112);
  uVar3 = lib::L2CValue::as_number(aLStack272);
  local_b0 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack168 = (ulong)uVar3;
  uVar9 = lib::L2CValue::as_number(aLStack288);
  lVar10 = lib::L2CValue::as_number(aLStack304);
  uVar3 = lib::L2CValue::as_number(aLStack320);
  local_50 = uVar9 & 0xffffffff | lVar10 << 0x20;
  pBStack72 = (BattleObject *)(ulong)uVar3;
  uVar3 = app::lua_bind::EffectModule__req_impl
                    (param_1->moduleAccessor,HVar5,(Vector3f *)&local_b0,(Vector3f *)&local_50,1.0,0
                     ,-1,false,0);
  lib::L2CValue::L2CValue(aLStack256,uVar3);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,0x199c462b5d);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_b0);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

