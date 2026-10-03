
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b0980(L2CAgent *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  long lVar8;
  Hash40 HVar9;
  L2CValue *this;
  Hash40MapEntry ***pppHVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  Hash40MapEntry **appHStack256 [2];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  Hash40MapEntry **appHStack112 [2];
  Hash40MapEntry **local_60;
  ulonglong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_CURRENT_ROT_Z);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  ppBVar11 = &param_1->moduleAccessor;
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)appHStack112,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
  fVar12 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack208,(L2CValue *)auStack176);
  FUN_71000b3fa0(aLStack192,param_1,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdfbf78d6f);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0xed6b566c9);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  bVar1 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl
                    (FIGHTER_STATUS_TRANSITION_TERM_ID_CLIFF_CATCH);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,(bool)(bVar1 & 1));
  lib::L2CValue::operator!((L2CValue *)auStack240);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0xdfbf78d6f);
    lib::L2CValue::L2CValue((L2CValue *)appHStack256,0x1fa4e2245a);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
    lib::L2CValue::operator=((L2CValue *)(auStack240 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)appHStack256,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack288,
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_IGNORE_OFF_RAIL_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack288);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_NORMAL_RAIL);
      lib::L2CValue::operator=((L2CValue *)auStack240,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_NORMAL_RAIL);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack288,
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_KEEP_POWERED_RAIL_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack288);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
      lib::L2CValue::operator=((L2CValue *)auStack240,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      lib::L2CValue::operator=((L2CValue *)appHStack256,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_NORMAL_RAIL);
      lib::L2CValue::operator=((L2CValue *)auStack240,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x17);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_NORMAL_RAIL)
        ;
        lib::L2CValue::operator=((L2CValue *)auStack240,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND_PREV);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
  uVar5 = lib::L2CValue::operator==((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
    uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator!((L2CValue *)appHStack256);
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::L2CValue(aLStack336,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack352,0x193eab058e);
        uVar5 = lib::L2CValue::as_integer(aLStack336);
        uVar6 = lib::L2CValue::as_integer(aLStack352);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack320,fVar12);
        lib::L2CValue::operator*(aLStack320,aLStack192);
        lib::L2CValue::operator+((L2CValue *)auStack176,aLStack304);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack288);
        lib::L2CAgent::push_lua_stack(param_1,aLStack368);
        app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue((L2CValue *)auStack288);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  (aLStack304,
                   _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_EFFECT_INTERVAL);
        iVar3 = lib::L2CValue::as_integer(aLStack304);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
        uVar5 = lib::L2CValue::operator==((L2CValue *)auStack288,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)auStack288);
        lib::L2CValue::~L2CValue(aLStack304);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack304,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack320,0x1aa533bb2b);
          uVar5 = lib::L2CValue::as_integer(aLStack304);
          uVar6 = lib::L2CValue::as_integer(aLStack320);
          lVar8 = app::lua_bind::WorkModule__get_param_int64_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,lVar8);
          lib::L2CValue::L2CValue(aLStack352,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack368,0x1a9308101b);
          uVar5 = lib::L2CValue::as_integer(aLStack352);
          uVar6 = lib::L2CValue::as_integer(aLStack368);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue(aLStack336,iVar3);
          HVar9 = lib::L2CValue::as_hash((L2CValue *)auStack288);
          iVar3 = lib::L2CValue::as_integer(aLStack336);
          uStack88 = LUA_SCRIPT_STATUS_FUNC_EXEC_STOP;
          local_60 = LUA_SCRIPT_LINE_WAZA_CUSTOMIZE;
          app::lua_bind::ShakeModule__req_time_scale_impl
                    (*ppBVar11,HVar9,iVar3,false,(Vector2f *)&local_60,1.0,0.0,false,false,-1,1.0);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack304,0x1a9308101b);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack288);
          uVar6 = lib::L2CValue::as_integer(aLStack304);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::StopModule__set_other_stop_impl(*ppBVar11,iVar3,0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
          uVar5 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_ANIMCMD_EFFECT);
            lib::L2CValue::L2CValue((L2CValue *)auStack288,0x2271885f83);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            HVar9 = lib::L2CValue::as_hash((L2CValue *)auStack288);
            app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar11,iVar3,HVar9,-1);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_ANIMCMD_EFFECT);
            lib::L2CValue::L2CValue((L2CValue *)auStack288,0x228b8762e0);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
            HVar9 = lib::L2CValue::as_hash((L2CValue *)auStack288);
            app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar11,iVar3,HVar9,-1);
          }
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_ANIMCMD_SOUND);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,0x20140089d5);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          HVar9 = lib::L2CValue::as_hash((L2CValue *)auStack288);
          app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar11,iVar3,HVar9,-1);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          app::WeaponPickelTrolleyLinkEventTurnTorchOn::new_l2c_table();
          lib::L2CValue::L2CValue
                    (aLStack304,
                     _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_CURRENT_POWERED_RAIL_OBJECT_GENERATION
                    );
          iVar3 = lib::L2CValue::as_integer(aLStack304);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,iVar3);
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_60,0x121f3423aa);
          lib::L2CValue::operator=(pLVar7,(L2CValue *)auStack288);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,_WEAPON_PICKEL_RAIL_LINK_NO_TROLLEY);
          FUN_7100067e30(aLStack384,param_1,auStack288,&local_60);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,4);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack288,
                     _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_POWERED_RAIL_EFFECT_INTERVAL);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack288);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar4);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        }
      }
    }
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_DRIVE_KIND_PREV);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,(int)pLVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_POWERED_RAIL);
  uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(this,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
      pppHVar10 = &local_60;
      uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)pppHVar10);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CAgent::math_abs((L2CAgent *)appHStack112,(L2CValue *)pppHVar10);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)(auStack240 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xdfbf78d6f);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,0xec1dcc00c);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack288);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)appHStack256,fVar12);
          fVar12 = (float)app::lua_bind::GroundModule__get_down_friction_impl(*ppBVar11);
          lib::L2CValue::L2CValue(aLStack304,fVar12);
          lib::L2CValue::operator*((L2CValue *)appHStack256,aLStack304);
          lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)appHStack256,0xdfbf78d6f);
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xb4f64a71b);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
          lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
          goto LAB_71000b1768;
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
      uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
LAB_71000b1af4:
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_OFF_RAIL);
        pppHVar10 = &local_60;
        uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)pppHVar10);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          pppHVar10 = appHStack112;
          uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)pppHVar10);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar5 & 1) != 0) {
            lib::L2CAgent::math_abs((L2CAgent *)appHStack112,(L2CValue *)pppHVar10);
            lib::L2CValue::L2CValue(aLStack304,45.0);
            lib::L2CAgent::math_min((L2CAgent *)auStack288,aLStack304,pLVar7);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,45.0);
            lib::L2CValue::operator/((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
            lib::L2CValue::~L2CValue(aLStack304);
            lib::L2CValue::~L2CValue((L2CValue *)auStack288);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
            lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::L2CValue(aLStack304,0xdfbf78d6f);
            lib::L2CValue::L2CValue(aLStack320,0x1d9eea9e62);
            uVar5 = lib::L2CValue::as_integer(aLStack304);
            uVar6 = lib::L2CValue::as_integer(aLStack320);
            fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
            lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar12);
            lib::L2CValue::operator*((L2CValue *)auStack288,(L2CValue *)appHStack256);
            fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
            lib::L2CValue::L2CValue(aLStack352,fVar12);
            lib::L2CValue::operator-(aLStack352);
            lib::L2CValue::operator*((L2CValue *)(auStack288 + 0x10),aLStack336);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            lib::L2CValue::~L2CValue(aLStack336);
            lib::L2CValue::~L2CValue(aLStack352);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)auStack288);
            lib::L2CValue::~L2CValue(aLStack320);
            lib::L2CValue::~L2CValue(aLStack304);
            lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xdfbf78d6f);
            lib::L2CValue::L2CValue((L2CValue *)auStack288,0xb4f64a71b);
            uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
            uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack288);
            fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
            lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
            goto LAB_71000b21f0;
          }
        }
        lib::L2CAgent::math_abs((L2CAgent *)appHStack112,(L2CValue *)pppHVar10);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)(auStack240 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)appHStack256,0xdfbf78d6f);
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0x516223d8b);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
          lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)appHStack256,0xdfbf78d6f);
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xb4f64a71b);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
          lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
          goto LAB_71000b1768;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        pppHVar10 = &local_60;
        uVar5 = lib::L2CValue::operator<((L2CValue *)appHStack112,(L2CValue *)pppHVar10);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          pppHVar10 = appHStack112;
          uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)pppHVar10);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar5 & 1) == 0) goto LAB_71000b2210;
          lib::L2CAgent::math_abs((L2CAgent *)appHStack112,(L2CValue *)pppHVar10);
          lib::L2CValue::L2CValue(aLStack304,45.0);
          lib::L2CAgent::math_min((L2CAgent *)auStack288,aLStack304,pLVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,45.0);
          lib::L2CValue::operator/((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue(aLStack304,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack320,0x1480178d52);
          uVar5 = lib::L2CValue::as_integer(aLStack304);
          uVar6 = lib::L2CValue::as_integer(aLStack320);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar12);
          lib::L2CValue::operator*((L2CValue *)auStack288,(L2CValue *)appHStack256);
          fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
          lib::L2CValue::L2CValue(aLStack352,fVar12);
          lib::L2CValue::operator-(aLStack352);
          lib::L2CValue::operator*((L2CValue *)(auStack288 + 0x10),aLStack336);
          lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xdfbf78d6f);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,0xb4f64a71b);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack288);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
          lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
        }
        else {
          lib::L2CAgent::math_abs((L2CAgent *)appHStack112,(L2CValue *)pppHVar10);
          lib::L2CValue::L2CValue(aLStack304,45.0);
          lib::L2CAgent::math_min((L2CAgent *)auStack288,aLStack304,pLVar7);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,45.0);
          lib::L2CValue::operator/((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue(aLStack304,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack320,0x16240061bf);
          uVar5 = lib::L2CValue::as_integer(aLStack304);
          uVar6 = lib::L2CValue::as_integer(aLStack320);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar12);
          lib::L2CValue::operator*((L2CValue *)auStack288,(L2CValue *)appHStack256);
          fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
          lib::L2CValue::L2CValue(aLStack336,fVar12);
          lib::L2CValue::operator*((L2CValue *)(auStack288 + 0x10),aLStack336);
          lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xdfbf78d6f);
          lib::L2CValue::L2CValue((L2CValue *)auStack288,0x1bf50caf46);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack288);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
          lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        pppHVar10 = &local_60;
        uVar5 = lib::L2CValue::operator<((L2CValue *)appHStack112,(L2CValue *)pppHVar10);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) goto LAB_71000b1af4;
        lib::L2CAgent::math_abs((L2CAgent *)appHStack112,(L2CValue *)pppHVar10);
        lib::L2CValue::L2CValue(aLStack304,45.0);
        lib::L2CAgent::math_min((L2CAgent *)auStack288,aLStack304,pLVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,45.0);
        lib::L2CValue::operator/((L2CValue *)(auStack288 + 0x10),(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue((L2CValue *)auStack288);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack304,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack320,0x1fa1183948);
        uVar5 = lib::L2CValue::as_integer(aLStack304);
        uVar6 = lib::L2CValue::as_integer(aLStack320);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar12);
        lib::L2CValue::operator*((L2CValue *)auStack288,(L2CValue *)appHStack256);
        fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack336,fVar12);
        lib::L2CValue::operator*((L2CValue *)(auStack288 + 0x10),aLStack336);
        lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack288);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xdfbf78d6f);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,0x24eaa3bc72);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack288);
        fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
        lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
      }
LAB_71000b21f0:
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      pppHVar10 = (Hash40MapEntry ***)auStack288;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)appHStack256,0xdfbf78d6f);
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xcbb9892c2);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)appHStack256,0xdfbf78d6f);
      lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xb4f64a71b);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
      lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
LAB_71000b1768:
      pppHVar10 = &local_60;
    }
    lib::L2CValue::~L2CValue((L2CValue *)pppHVar10);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0xdfbf78d6f);
    lib::L2CValue::L2CValue((L2CValue *)auStack288,0x15aa37653f);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack288);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)appHStack256,fVar12);
    lib::L2CValue::operator*((L2CValue *)appHStack256,aLStack192);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack288);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)appHStack256,0xdfbf78d6f);
    lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0x1bb8f3a74c);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
    lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
  }
LAB_71000b2210:
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack288 + 0x10),
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_NO_GRAVITY_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)appHStack256,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)appHStack256);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  FUN_71000a53a0(&local_60,param_1);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_TROLLEY_DRIVE_KIND_NORMAL_RAIL);
      uVar5 = lib::L2CValue::operator==((L2CValue *)auStack240,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        FUN_71000a5460(appHStack256,param_1);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        uVar5 = lib::L2CValue::operator==((L2CValue *)appHStack256,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack288,0xdfbf78d6f);
          lib::L2CValue::L2CValue(aLStack304,0x14e20b9a3d);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack288);
          uVar6 = lib::L2CValue::as_integer(aLStack304);
          fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
          lib::L2CValue::operator+((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          lib::L2CValue::operator*((L2CValue *)appHStack256,(L2CValue *)auStack176);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          pLVar7 = (L2CValue *)auStack288;
          uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,pLVar7);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)auStack288);
          if ((uVar5 & 1) == 0) {
            lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar7);
            uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)(auStack288 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack320,0xdfbf78d6f);
              lib::L2CValue::L2CValue(aLStack336,0xe9a846946);
              uVar5 = lib::L2CValue::as_integer(aLStack320);
              uVar6 = lib::L2CValue::as_integer(aLStack336);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6)
              ;
              lib::L2CValue::L2CValue(aLStack304,fVar12);
              lib::L2CValue::operator*(aLStack304,(L2CValue *)appHStack256);
              lib::L2CValue::operator+(aLStack144,(L2CValue *)auStack288);
              lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)auStack288);
              lib::L2CValue::~L2CValue(aLStack304);
              lib::L2CValue::~L2CValue(aLStack336);
              lib::L2CValue::~L2CValue(aLStack320);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
              lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
              goto LAB_71000b261c;
            }
          }
          else {
            lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar7);
            uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)(auStack288 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar5 & 1) != 0) {
              lib::L2CValue::L2CValue(aLStack320,0xdfbf78d6f);
              lib::L2CValue::L2CValue(aLStack336,0xecd2cad91);
              uVar5 = lib::L2CValue::as_integer(aLStack320);
              uVar6 = lib::L2CValue::as_integer(aLStack336);
              fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6)
              ;
              lib::L2CValue::L2CValue(aLStack304,fVar12);
              lib::L2CValue::operator*(aLStack304,(L2CValue *)appHStack256);
              lib::L2CValue::operator+(aLStack144,(L2CValue *)auStack288);
              lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
              lib::L2CValue::~L2CValue((L2CValue *)auStack288);
              lib::L2CValue::~L2CValue(aLStack304);
              lib::L2CValue::~L2CValue(aLStack336);
              lib::L2CValue::~L2CValue(aLStack320);
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
              lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
LAB_71000b261c:
              lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            }
          }
          lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
        }
        lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
      }
    }
  }
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
    lib::L2CValue::operator=((L2CValue *)(auStack240 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
  lib::L2CValue::L2CValue((L2CValue *)appHStack256,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack240 + 0x10));
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack176);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)appHStack256);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack288 + 0x10));
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack288);
  app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_1,aLStack128);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
  app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  pLVar7 = (L2CValue *)auStack240;
  lib::L2CAgent::push_lua_stack(param_1,pLVar7);
  app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar7);
  pppHVar10 = &local_60;
  uVar5 = lib::L2CValue::operator<=((L2CValue *)(auStack176 + 0x10),(L2CValue *)pppHVar10);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    pLVar7 = aLStack144;
    lib::L2CValue::operator+((L2CValue *)auStack176,pLVar7);
    lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar7);
    lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar7);
    pppHVar10 = &local_60;
    uVar5 = lib::L2CValue::operator<((L2CValue *)appHStack256,(L2CValue *)pppHVar10);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
      lib::L2CValue::L2CValue((L2CValue *)appHStack256,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
      pppHVar10 = appHStack256;
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)pppHVar10);
      app::sv_kinetic_energy::set_accel(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
  }
  lib::L2CAgent::math_abs((L2CAgent *)auStack176,(L2CValue *)pppHVar10);
  uVar5 = lib::L2CValue::operator<((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
    lib::L2CValue::L2CValue((L2CValue *)appHStack256,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)appHStack256);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack176 + 0x10));
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
    app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0xdfbf78d6f);
    lib::L2CValue::L2CValue((L2CValue *)appHStack256,0xc5958d474);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar12);
    lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    pppHVar10 = &local_60;
    uVar5 = lib::L2CValue::operator<(aLStack128,(L2CValue *)pppHVar10);
    if ((uVar5 & 1) == 0) goto LAB_71000b2b10;
    lib::L2CAgent::math_abs((L2CAgent *)auStack176,(L2CValue *)pppHVar10);
    lib::L2CValue::operator-((L2CValue *)appHStack256,(L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
    lib::L2CValue::L2CValue((L2CValue *)appHStack256,(L2CValue *)&local_60);
    uVar5 = lib::L2CValue::operator<((L2CValue *)auStack240,(L2CValue *)appHStack256);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator=((L2CValue *)appHStack256,(L2CValue *)auStack240);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack288 + 0x10),_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack288 + 0x10));
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)appHStack256);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack288);
    app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)auStack288);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  }
  lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
LAB_71000b2b10:
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue((L2CValue *)appHStack256,0xdfbf78d6f);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0x1bb8f3a74c);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)appHStack256);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack288);
  app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)appHStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack112);
  return;
}

