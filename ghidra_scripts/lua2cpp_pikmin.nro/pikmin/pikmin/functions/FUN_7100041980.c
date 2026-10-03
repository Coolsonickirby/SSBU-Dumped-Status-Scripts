
void FUN_7100041980(long param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0x66933a7e6);
  lib::L2CValue::L2CValue(aLStack128,100);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  uVar4 = app::sv_math::rand(HVar5,iVar3);
  lib::L2CValue::L2CValue(aLStack80,uVar4);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,0x32);
  uVar6 = lib::L2CValue::operator<(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x3c);
    uVar6 = lib::L2CValue::operator<(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x46);
      uVar6 = lib::L2CValue::operator<(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x50);
        uVar6 = lib::L2CValue::operator<(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) == 0) {
          bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
          if ((bVar2 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0x5a);
            uVar6 = lib::L2CValue::operator<(aLStack96,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack80,0x5cda58260);
              lib::L2CValue::L2CValue(aLStack112,0.0);
              lib::L2CValue::L2CValue(aLStack128,1.0);
              lib::L2CValue::L2CValue(aLStack144,false);
              HVar5 = lib::L2CValue::as_hash(aLStack80);
              fVar7 = (float)lib::L2CValue::as_number(aLStack112);
              fVar8 = (float)lib::L2CValue::as_number(aLStack128);
              bVar1 = lib::L2CValue::as_bool(aLStack144);
              app::lua_bind::MotionModule__change_motion_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,
                         (bool)(bVar1 & 1),0.0,false,false);
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,0x554acd3da);
              lib::L2CValue::L2CValue(aLStack112,0.0);
              lib::L2CValue::L2CValue(aLStack128,1.0);
              lib::L2CValue::L2CValue(aLStack144,false);
              HVar5 = lib::L2CValue::as_hash(aLStack80);
              fVar7 = (float)lib::L2CValue::as_number(aLStack112);
              fVar8 = (float)lib::L2CValue::as_number(aLStack128);
              bVar1 = lib::L2CValue::as_bool(aLStack144);
              app::lua_bind::MotionModule__change_motion_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,
                         (bool)(bVar1 & 1),0.0,false,false);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x553c117c3);
            lib::L2CValue::L2CValue(aLStack112,0.0);
            lib::L2CValue::L2CValue(aLStack128,1.0);
            lib::L2CValue::L2CValue(aLStack144,false);
            HVar5 = lib::L2CValue::as_hash(aLStack80);
            fVar7 = (float)lib::L2CValue::as_number(aLStack112);
            fVar8 = (float)lib::L2CValue::as_number(aLStack128);
            bVar1 = lib::L2CValue::as_bool(aLStack144);
            app::lua_bind::MotionModule__change_motion_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,
                       (bool)(bVar1 & 1),0.0,false,false);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,0x523abe34c);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::L2CValue(aLStack128,1.0);
          lib::L2CValue::L2CValue(aLStack144,false);
          HVar5 = lib::L2CValue::as_hash(aLStack80);
          fVar7 = (float)lib::L2CValue::as_number(aLStack112);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          bVar1 = lib::L2CValue::as_bool(aLStack144);
          app::lua_bind::MotionModule__change_motion_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,
                     (bool)(bVar1 & 1),0.0,false,false);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0x5bdcf76ef);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        fVar7 = (float)lib::L2CValue::as_number(aLStack112);
        fVar8 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,
                   (bool)(bVar1 & 1),0.0,false,false);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x5cac84679);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack112);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,
                 (bool)(bVar1 & 1),0.0,false,false);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x553c117c3);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,fVar7,fVar8,(bool)(bVar1 & 1),
               0.0,false,false);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

