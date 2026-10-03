
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000319c0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  long lVar6;
  long lVar7;
  L2CValue *this;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator<=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack64,0x28);
      uVar4 = lib::L2CValue::operator<(aLStack64,aLStack80);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_DUCKHUNT_GUNMAN_STATUS_COMMON_WORK_FLAG_VISIBILITY_CHANGED);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) goto LAB_7100031f00;
        lib::L2CValue::L2CValue
                  (aLStack64,_WEAPON_DUCKHUNT_GUNMAN_STATUS_COMMON_WORK_FLAG_VISIBILITY_CHANGED);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_KIND);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_KIND_HIGE);
        uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_KIND_NOPPO);
          uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
            lib::L2CValue::L2CValue(aLStack96,0xc9dfc20bb);
            lVar6 = lib::L2CValue::as_integer(aLStack64);
            lVar7 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar6,lVar7);
            goto LAB_7100031ee8;
          }
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_KIND_KUROFUKU);
          uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
            lib::L2CValue::L2CValue(aLStack96,0xf8dde86fd);
            lVar6 = lib::L2CValue::as_integer(aLStack64);
            lVar7 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar6,lVar7);
            goto LAB_7100031ee8;
          }
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_KIND_SONBURERO);
          uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
            lib::L2CValue::L2CValue(aLStack96,0xf30c40459);
            lVar6 = lib::L2CValue::as_integer(aLStack64);
            lVar7 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar6,lVar7);
            goto LAB_7100031ee8;
          }
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_KIND_BOSS);
          uVar4 = lib::L2CValue::operator==(aLStack64,aLStack80);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
            lib::L2CValue::L2CValue(aLStack96,0xb582b9e56);
            lVar6 = lib::L2CValue::as_integer(aLStack64);
            lVar7 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar6,lVar7);
            goto LAB_7100031ee8;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack96,0xbb120579a);
          lVar6 = lib::L2CValue::as_integer(aLStack64);
          lVar7 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar6,lVar7);
LAB_7100031ee8:
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
        }
        this = aLStack80;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack80);
        this = aLStack96;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x176cbe7407);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      iVar3 = app::lua_bind::SoundModule__play_se_impl
                        (param_2->moduleAccessor,HVar5,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack64);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack128);
      this = aLStack64;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_SHOOT_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(param_2->moduleAccessor,iVar3);
    this = aLStack64;
  }
  lib::L2CValue::~L2CValue(this);
LAB_7100031f00:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

