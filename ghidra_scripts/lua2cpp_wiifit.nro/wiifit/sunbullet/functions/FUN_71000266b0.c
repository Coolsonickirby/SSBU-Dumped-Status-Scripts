
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_71000266b0(L2CWeaponWiifitSunbullet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  long lVar9;
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
  
  lib::L2CValue::L2CValue
            (aLStack288,
             GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT | _GROUND_TOUCH_FLAG_DOWN_LEFT |
             _GROUND_TOUCH_FLAG_DOWN_RIGHT | _GROUND_TOUCH_FLAG_UP);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar6 = lib::L2CValue::operator<((L2CValue *)&local_50,pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_TOUCH_FLAG_DOWN);
    lib::L2CValue::operator|(aLStack288,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator=(aLStack288,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  uVar3 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_WIIFIT_SUNBULLET_INSTANCE_WORK_ID_FLAG_GROUND_TOUCH);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((bVar2 & 1U) == 0) {
      bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      lib::L2CValue::operator!((L2CValue *)&local_60);
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
        iVar4 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
        uVar6 = lib::L2CValue::operator<=((L2CValue *)&local_60,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x199c462b5d);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100026b5c;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100026b5c;
    }
  }
  else {
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  fVar8 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  fVar8 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  fVar8 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::L2CValue(aLStack176,0x106b78ea8a);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,1.0);
  lib::L2CValue::L2CValue(aLStack256,EFFECT_SUB_ATTRIBUTE_NONE);
  lib::L2CValue::L2CValue(aLStack272,-1);
  HVar7 = lib::L2CValue::as_hash(aLStack176);
  uVar6 = lib::L2CValue::as_number(aLStack112);
  lVar9 = lib::L2CValue::as_number(aLStack128);
  uVar3 = lib::L2CValue::as_number(aLStack144);
  local_50 = uVar6 & 0xffffffff | lVar9 << 0x20;
  uStack72 = (ulong)uVar3;
  uVar6 = lib::L2CValue::as_number(aLStack192);
  lVar9 = lib::L2CValue::as_number(aLStack208);
  uVar3 = lib::L2CValue::as_number(aLStack224);
  local_60 = uVar6 & 0xffffffff | lVar9 << 0x20;
  uStack88 = (ulong)uVar3;
  fVar8 = (float)lib::L2CValue::as_number(aLStack240);
  uVar3 = lib::L2CValue::as_integer(aLStack256);
  iVar4 = lib::L2CValue::as_integer(aLStack272);
  uVar3 = app::lua_bind::EffectModule__req_impl
                    (this->moduleAccessor,HVar7,(Vector3f *)&local_50,(Vector3f *)&local_60,fVar8,
                     uVar3,iVar4,false,0);
  lib::L2CValue::L2CValue(aLStack160,uVar3);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x199c462b5d);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100026b5c:
  lib::L2CValue::~L2CValue(aLStack288);
  return;
}

