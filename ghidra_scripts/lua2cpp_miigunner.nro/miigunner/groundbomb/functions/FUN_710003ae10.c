
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003ae10(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *this;
  ulong uVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
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
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_710003b714;
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  ppBVar9 = &param_2->moduleAccessor;
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator<=(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_FLASH_START);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack176,0x10e835f61d);
      lib::L2CValue::L2CValue(aLStack192,0xa83af6335);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack128,iVar3);
      uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x9a3f0deb0);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar8 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack112);
        fVar11 = (float)lib::L2CValue::as_number(aLStack128);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue
                  (aLStack96,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_FLASH_START);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack128,_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
LAB_710003b434:
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_TOUCH);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar3);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack192,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator==(aLStack176,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) == 0) goto LAB_710003b434;
      lib::L2CValue::L2CValue(aLStack96,0x18b78d41a0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_TOUCH);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      lib::L2CValue::operator!(aLStack112);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack176,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_BOUND_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack128,iVar3);
        lib::L2CValue::L2CValue(aLStack96,1);
        lib::L2CValue::operator+(aLStack128,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack96,3);
        uVar6 = lib::L2CValue::operator<=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0x1be7fce331);
          HVar8 = lib::L2CValue::as_hash(aLStack96);
          iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar9,HVar8,true,false,false,false,0);
          lib::L2CValue::L2CValue(aLStack224,iVar3);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_ANIMCMD_EFFECT);
          lib::L2CValue::L2CValue(aLStack128,0xc61ff5239);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          HVar8 = lib::L2CValue::as_hash(aLStack128);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar9,iVar3,HVar8,-1);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue
                  (aLStack96,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_BOUND_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar3,iVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_FLAG_TOUCH);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar3);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue
              (aLStack128,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_HIT_AFTER_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator<(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_HIT_AFTER_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_HIT_AFTER_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar6 = lib::L2CValue::operator<=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack240,_WEAPON_MIIGUNNER_GROUNDBOMB_STATUS_KIND_BURST_ATTACK);
        lib::L2CValue::L2CValue(aLStack256,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::~L2CValue(aLStack256);
        this = aLStack240;
        goto LAB_710003af10;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack128,
               _WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_DAMAGE_REFLECT_AFTER_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator<(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) goto LAB_710003b714;
    bVar2 = app::lua_bind::StopModule__is_stop_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack96,
                 _WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_DAMAGE_REFLECT_AFTER_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue
              (aLStack128,
               _WEAPON_MIIGUNNER_GROUNDBOMB_INSTANCE_WORK_ID_INT_DAMAGE_REFLECT_AFTER_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator<=(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) goto LAB_710003b714;
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_MIIGUNNER_GROUNDBOMB_STATUS_KIND_BURST_ATTACK);
    lib::L2CValue::L2CValue(aLStack288,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::~L2CValue(aLStack288);
    this = aLStack272;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_MIIGUNNER_GROUNDBOMB_STATUS_KIND_BURST_ATTACK);
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    this = aLStack144;
  }
LAB_710003af10:
  lib::L2CValue::~L2CValue(this);
LAB_710003b714:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

