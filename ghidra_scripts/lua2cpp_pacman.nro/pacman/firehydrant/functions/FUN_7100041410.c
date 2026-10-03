
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100041410(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  MotionNodeRotateCompose MVar6;
  MotionNodeRotateOrder MVar7;
  ulong uVar8;
  L2CValue *this;
  ulong *this_00;
  ulong uVar9;
  Hash40 HVar10;
  Hash40 HVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  long lVar14;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
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
  ulong local_90;
  undefined8 uStack136;
  ulong uStack128;
  undefined8 uStack120;
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack432,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  ppBVar12 = &param_2->moduleAccessor;
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
  lib::L2CValue::operator=(aLStack432,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_71000418cc;
  FUN_710003a910(param_2);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack128,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_FLY_TOUCH);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar8 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    this_00 = &uStack128;
LAB_710004178c:
    lib::L2CValue::~L2CValue((L2CValue *)this_00);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_GROUND_TOUCH_FLAG_ALL);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar12,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_90);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar13 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
      lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar13 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0xe);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar8 = lib::L2CValue::operator<=(this,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&uStack128,_GROUND_TOUCH_FLAG_UP);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&uStack128);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar12,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator<(aLStack160,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        }
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
        lib::L2CValue::L2CValue((L2CValue *)&uStack128,GROUND_TOUCH_FLAG_DOWN);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&uStack128);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar12,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator<((L2CValue *)&local_60,aLStack160);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        }
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
        lib::L2CValue::L2CValue((L2CValue *)&uStack128,GROUND_TOUCH_FLAG_RIGHT);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&uStack128);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar12,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          uVar8 = lib::L2CValue::operator<(aLStack176,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
          if ((uVar8 & 1) != 0) goto LAB_7100041790;
        }
        lib::L2CValue::L2CValue((L2CValue *)&uStack128,_GROUND_TOUCH_FLAG_LEFT);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&uStack128);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar12,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          uVar8 = lib::L2CValue::operator<((L2CValue *)&local_60,aLStack176);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
          if ((uVar8 & 1) != 0) goto LAB_7100041790;
        }
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_CAMERA_QUAKE_KIND_S);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::CameraModule__req_quake_impl(*ppBVar12,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x15473a55ba);
        HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_60);
        iVar4 = app::lua_bind::SoundModule__play_se_impl(*ppBVar12,HVar10,true,false,false,false,0);
        lib::L2CValue::L2CValue(aLStack192,iVar4);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar12,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,
                     _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_FLY_TOUCH);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar12,iVar4);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_MA_MSC_CMD_EFFECT_LANDING_EFFECT);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0xe963002d8);
          lib::L2CValue::L2CValue((L2CValue *)&uStack128,0x31ed91fca);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CValue::L2CValue(aLStack304,1.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          lib::L2CValue::L2CValue(aLStack352,0.0);
          lib::L2CValue::L2CValue(aLStack368,0.0);
          lib::L2CValue::L2CValue(aLStack384,0.0);
          lib::L2CValue::L2CValue(aLStack400,0.0);
          lib::L2CValue::L2CValue(aLStack416,true);
          iVar4 = (int)((ulong)aLStack256 >> 0x20);
          FUN_7100031aa0(aLStack208,param_2,&local_60,&local_70,&uStack128,&local_90,aLStack224,
                         aLStack240);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack416);
          lib::L2CValue::~L2CValue(aLStack400);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue(aLStack368);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue((L2CValue *)&local_90);
          lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue(aLStack224,0x19ce857f4b);
          lib::L2CValue::L2CValue(aLStack240,0x31d39a761);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CValue::L2CValue(aLStack304,0.0);
          lib::L2CValue::L2CValue(aLStack320,0.0);
          lib::L2CValue::L2CValue(aLStack336,0.0);
          fVar13 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar12);
          lib::L2CValue::L2CValue(aLStack352,fVar13);
          HVar10 = lib::L2CValue::as_hash(aLStack224);
          HVar11 = lib::L2CValue::as_hash(aLStack240);
          uVar8 = lib::L2CValue::as_number(aLStack256);
          lVar14 = lib::L2CValue::as_number(aLStack272);
          uVar5 = lib::L2CValue::as_number(aLStack288);
          local_60 = uVar8 & 0xffffffff | lVar14 << 0x20;
          uStack88 = (ulong)uVar5;
          uVar8 = lib::L2CValue::as_number(aLStack304);
          lVar14 = lib::L2CValue::as_number(aLStack320);
          uVar5 = lib::L2CValue::as_number(aLStack336);
          local_70 = uVar8 & 0xffffffff | lVar14 << 0x20;
          uStack104 = (ulong)uVar5;
          fVar13 = (float)lib::L2CValue::as_number(aLStack352);
          uStack136 = _FIGHTER_STATUS_AIR_LASSO_HANG_WORK_FLOAT_BODY_OFFSET;
          local_90 = FIGHTER_STATUS_AIR_LASSO_HANG_FLAG_EXTEND_ARM;
          uStack128 = local_90;
          uStack120 = uStack136;
          uVar5 = app::lua_bind::EffectModule__req_on_joint_impl
                            (*ppBVar12,HVar10,HVar11,(Vector3f *)&local_60,(Vector3f *)&local_70,
                             fVar13,(Vector3f *)&uStack128,(Vector3f *)&local_90,false,0,iVar4,0);
          lib::L2CValue::L2CValue((L2CValue *)&uStack128,uVar5);
          lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
          lib::L2CValue::~L2CValue(aLStack352);
          lib::L2CValue::~L2CValue(aLStack336);
          lib::L2CValue::~L2CValue(aLStack320);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,
                   _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_SMASH_REFLECT_NUM);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__dec_int_impl(*ppBVar12,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,
                   _WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_SMASH_REFLECT_NUM);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
        uVar8 = lib::L2CValue::operator<=((L2CValue *)&local_70,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue((L2CValue *)&local_90);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0x18b78d41a0);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_70);
          app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          this_00 = &local_70;
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_60,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_REMOVE);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          this_00 = &local_60;
        }
        goto LAB_710004178c;
      }
    }
  }
LAB_7100041790:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack128,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack128);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
  lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
  bVar2 = app::lua_bind::StopModule__is_stop_impl(*ppBVar12);
  lib::L2CValue::L2CValue((L2CValue *)&uStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar8 = lib::L2CValue::operator==((L2CValue *)&uStack128,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::operator+(aLStack432,(L2CValue *)&local_70);
    lib::L2CValue::operator=(aLStack432,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator+(aLStack432,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT);
  fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&uStack128);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
LAB_71000418cc:
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x118d74daa0);
  lib::L2CValue::L2CValue((L2CValue *)&uStack128,0x19bc93065a);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&uStack128);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar8,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x118d74daa0);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x19259a57e0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar8,uVar9);
  lib::L2CValue::L2CValue((L2CValue *)&uStack128,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  lib::L2CValue::operator-(aLStack432);
  lib::L2CValue::operator-(aLStack432);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,_MOTION_NODE_ROTATE_COMPOSE_NONE);
  lib::L2CValue::L2CValue(aLStack224,_MOTION_NODE_ROTATE_ORDER_ZYX);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar8 = lib::L2CValue::as_number(aLStack160);
  lVar14 = lib::L2CValue::as_number(aLStack176);
  uVar5 = lib::L2CValue::as_number(aLStack192);
  local_60 = uVar8 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar5;
  MVar6 = lib::L2CValue::as_integer(aLStack208);
  MVar7 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*ppBVar12,HVar10,(Vector3f *)&local_60,MVar6,MVar7);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack192,true);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar8 = lib::L2CValue::as_number(aLStack160);
  lVar14 = lib::L2CValue::as_number((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_number((L2CValue *)&uStack128);
  local_60 = uVar8 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar5;
  bVar2 = lib::L2CValue::as_bool(aLStack176);
  bVar3 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::ModelModule__set_joint_translate_impl
            (*ppBVar12,HVar10,(Vector3f *)&local_60,(bool)(bVar2 & 1),(bool)(bVar3 & 1));
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x4207dd664);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::operator-((L2CValue *)&local_70);
  lib::L2CValue::operator-((L2CValue *)&uStack128);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,true);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar8 = lib::L2CValue::as_number(aLStack160);
  lVar14 = lib::L2CValue::as_number(aLStack176);
  uVar5 = lib::L2CValue::as_number(aLStack192);
  local_60 = uVar8 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar5;
  bVar2 = lib::L2CValue::as_bool(aLStack208);
  bVar3 = lib::L2CValue::as_bool(aLStack224);
  app::lua_bind::ModelModule__set_joint_translate_impl
            (*ppBVar12,HVar10,(Vector3f *)&local_60,(bool)(bVar2 & 1),(bool)(bVar3 & 1));
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue((L2CValue *)&uStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack432);
  return;
}

