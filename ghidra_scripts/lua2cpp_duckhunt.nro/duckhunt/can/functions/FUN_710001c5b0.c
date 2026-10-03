
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c5b0(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  long lVar6;
  long lVar7;
  BattleObjectModuleAccessor **ppBVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  ppBVar8 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::L2CValue(aLStack64,2);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
        iVar1 = lib::L2CValue::as_integer(aLStack96);
        iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
        lib::L2CValue::L2CValue(aLStack80,iVar1);
        lib::L2CValue::L2CValue(aLStack64,3);
        uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE)
          ;
          iVar1 = lib::L2CValue::as_integer(aLStack96);
          iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
          lib::L2CValue::L2CValue(aLStack80,iVar1);
          lib::L2CValue::L2CValue(aLStack64,0xc);
          uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue
                      (aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
            iVar1 = lib::L2CValue::as_integer(aLStack128);
            iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
            lib::L2CValue::L2CValue(aLStack112,iVar1);
            lib::L2CValue::L2CValue(aLStack64,0xd);
            uVar4 = lib::L2CValue::operator==(aLStack112,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar4 & 1) != 0) {
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack128);
              goto LAB_710001cec8;
            }
            lib::L2CValue::L2CValue
                      (aLStack160,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
            iVar1 = lib::L2CValue::as_integer(aLStack160);
            iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
            lib::L2CValue::L2CValue(aLStack144,iVar1);
            lib::L2CValue::L2CValue(aLStack64,0x17);
            uVar4 = lib::L2CValue::operator==(aLStack144,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar4 & 1) != 0) goto LAB_710001ced8;
            lib::L2CValue::L2CValue
                      (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
            iVar1 = lib::L2CValue::as_integer(aLStack96);
            iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
            lib::L2CValue::L2CValue(aLStack80,iVar1);
            lib::L2CValue::L2CValue(aLStack64,0x7b);
            uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar4 & 1) == 0) {
              return;
            }
            lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
            lib::L2CValue::L2CValue(aLStack80,0x1072b6e3f4);
            lVar6 = lib::L2CValue::as_integer(aLStack64);
            lVar7 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,0x4d2);
            lib::L2CValue::L2CValue
                      (aLStack80,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
            iVar1 = lib::L2CValue::as_integer(aLStack64);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
          }
          else {
LAB_710001cec8:
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
LAB_710001ced8:
            lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
            lib::L2CValue::L2CValue(aLStack80,0xeea7bb40b);
            lVar6 = lib::L2CValue::as_integer(aLStack64);
            lVar7 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack64);
            lib::L2CValue::L2CValue(aLStack64,0x7b);
            lib::L2CValue::L2CValue
                      (aLStack80,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
            iVar1 = lib::L2CValue::as_integer(aLStack64);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
          }
          lib::L2CValue::~L2CValue(aLStack80);
          lVar6 = -0x30;
          goto LAB_710001d0d4;
        }
        lib::L2CValue::L2CValue(aLStack64,0x66933a7e6);
        lib::L2CValue::L2CValue(aLStack96,2);
        HVar5 = lib::L2CValue::as_hash(aLStack64);
        iVar1 = lib::L2CValue::as_integer(aLStack96);
        uVar2 = app::sv_math::rand(HVar5,iVar1);
        lib::L2CValue::L2CValue(aLStack80,uVar2);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0);
        uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack96,0xc32fa1117);
          lVar6 = lib::L2CValue::as_integer(aLStack64);
          lVar7 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,0x17);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE)
          ;
          iVar1 = lib::L2CValue::as_integer(aLStack64);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack96,0xc30bcaf4e);
          lVar6 = lib::L2CValue::as_integer(aLStack64);
          lVar7 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,0xd);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE)
          ;
          iVar1 = lib::L2CValue::as_integer(aLStack64);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x66933a7e6);
        lib::L2CValue::L2CValue(aLStack96,2);
        HVar5 = lib::L2CValue::as_hash(aLStack64);
        iVar1 = lib::L2CValue::as_integer(aLStack96);
        uVar2 = app::sv_math::rand(HVar5,iVar1);
        lib::L2CValue::L2CValue(aLStack80,uVar2);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0);
        uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack96,0xc32fa1117);
          lVar6 = lib::L2CValue::as_integer(aLStack64);
          lVar7 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,0x17);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE)
          ;
          iVar1 = lib::L2CValue::as_integer(aLStack64);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack96,0xc47bb9fd8);
          lVar6 = lib::L2CValue::as_integer(aLStack64);
          lVar7 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::L2CValue(aLStack64,0xc);
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE)
          ;
          iVar1 = lib::L2CValue::as_integer(aLStack64);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x66933a7e6);
      lib::L2CValue::L2CValue(aLStack96,2);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      uVar2 = app::sv_math::rand(HVar5,iVar1);
      lib::L2CValue::L2CValue(aLStack80,uVar2);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack96,0xc30bcaf4e);
        lVar6 = lib::L2CValue::as_integer(aLStack64);
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0xd);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack96,0xc47bb9fd8);
        lVar6 = lib::L2CValue::as_integer(aLStack64);
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0xc);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0x66933a7e6);
    lib::L2CValue::L2CValue(aLStack96,3);
    HVar5 = lib::L2CValue::as_hash(aLStack64);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    uVar2 = app::sv_math::rand(HVar5,iVar1);
    lib::L2CValue::L2CValue(aLStack80,uVar2);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,1);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack96,0xa6d06f410);
        lVar6 = lib::L2CValue::as_integer(aLStack64);
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,3);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack96,0xa1a01c486);
        lVar6 = lib::L2CValue::as_integer(aLStack64);
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,2);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
        iVar1 = lib::L2CValue::as_integer(aLStack64);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack96,0xa8308953c);
      lVar6 = lib::L2CValue::as_integer(aLStack64);
      lVar7 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar8,lVar6,lVar7);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_GUN_MARK_TYPE);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar3);
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lVar6 = -0x40;
LAB_710001d0d4:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar6));
  return;
}

