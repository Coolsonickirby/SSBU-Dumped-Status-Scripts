
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGekkougaGekkougas::status::FinalHit_main
          (L2CWeaponGekkougaGekkougas *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLAG_MOVE_START);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  ppBVar9 = &this->moduleAccessor;
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar2);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue
            (aLStack224,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_TARGET_BASE_POS_X);
  iVar2 = lib::L2CValue::as_integer(aLStack224);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar2);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_TARGET_BASE_POS_Y);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar2);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack224);
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack224,*pfVar3);
  lib::L2CValue::L2CValue(aLStack208,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack192,pfVar3[2]);
  FUN_7100029660(aLStack176,this,aLStack224);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_TO_TARGET_LR)
  ;
  iVar2 = lib::L2CValue::as_integer(aLStack272);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar2);
  lib::L2CValue::L2CValue(aLStack256,fVar10);
  lib::L2CValue::L2CValue(aLStack112,-1.0);
  lib::L2CValue::operator_(aLStack256,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  fVar10 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack256,fVar10);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack288,pLVar4);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack304,pLVar4);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack368,0xf8e27ea85);
  lib::L2CValue::L2CValue(aLStack384,0x19ebe04843);
  uVar5 = lib::L2CValue::as_integer(aLStack368);
  uVar6 = lib::L2CValue::as_integer(aLStack384);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack352,fVar10);
  lib::L2CValue::operator_(aLStack352,aLStack256);
  lib::L2CValue::operator_(aLStack336,aLStack240);
  lib::L2CValue::operator_(pLVar4,aLStack320);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack352,0xf8e27ea85);
  lib::L2CValue::L2CValue(aLStack368,0x199ce778d5);
  uVar5 = lib::L2CValue::as_integer(aLStack352);
  uVar6 = lib::L2CValue::as_integer(aLStack368);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack336,fVar10);
  lib::L2CValue::operator_(aLStack336,aLStack256);
  lib::L2CValue::operator_(pLVar4,aLStack320);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_TARGET_X);
  fVar10 = (float)lib::L2CValue::as_number(aLStack320);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack320);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(pLVar4,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_TARGET_Y);
  fVar10 = (float)lib::L2CValue::as_number(aLStack320);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(aLStack240,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_OFFSET_LR);
  fVar10 = (float)lib::L2CValue::as_number(aLStack320);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack320);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,pLVar7);
  lua2cpp::L2CFighterBase::sign(this,(L2CValue)0xa0);
  lib::L2CValue::L2CValue(aLStack112,-1.0);
  lib::L2CValue::operator_(aLStack336,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack352);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,pLVar7);
  lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x70);
  lib::L2CValue::L2CValue(aLStack112,-1.0);
  lib::L2CValue::operator_(aLStack384,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(aLStack368,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_ATTACK_LR);
  fVar10 = (float)lib::L2CValue::as_number(aLStack336);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack400);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
  lib::L2CValue::operator_(pLVar7,pLVar4);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CValue::operator_(pLVar4,pLVar7);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar4,pLVar7);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x162d277af);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  lib::L2CValue::operator_(pLVar4,pLVar7);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::L2CValue(aLStack448,aLStack336);
  lua2cpp::L2CFighterBase::Vector3__length(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack112,0xf8e27ea85);
  lib::L2CValue::L2CValue(aLStack480,0x10c0b4a58a);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack480);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack464,fVar10);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack480,1.0);
  lib::L2CValue::L2CValue(aLStack112,0xf8e27ea85);
  lib::L2CValue::L2CValue(aLStack512,0x12dc5d5284);
  uVar5 = lib::L2CValue::as_integer(aLStack112);
  uVar6 = lib::L2CValue::as_integer(aLStack512);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack496,iVar2);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack432,aLStack464);
  lib::L2CValue::operator_(aLStack480,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  uVar5 = lib::L2CValue::operator_(aLStack480,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    uVar5 = lib::L2CValue::operator_(aLStack496,aLStack480);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::operator_(aLStack432,aLStack496);
      lib::L2CValue::operator_(aLStack464,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::operator_(aLStack480,aLStack496);
    }
  }
  else {
    lib::L2CValue::operator_(aLStack464,aLStack432);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator_(aLStack480,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(aLStack464,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_SPEED);
  fVar10 = (float)lib::L2CValue::as_number(aLStack512);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::operator_(aLStack496,aLStack480);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(aLStack528,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLOAT_MOVE_FRAME);
  fVar10 = (float)lib::L2CValue::as_number(aLStack512);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar9,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack528);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack240);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0x974cac6bc);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lib::L2CValue::L2CValue(aLStack528,1.0);
    lib::L2CValue::L2CValue(aLStack544,false);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack512);
    fVar11 = (float)lib::L2CValue::as_number(aLStack528);
    bVar1 = lib::L2CValue::as_bool(aLStack544);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0xc169b2384);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lib::L2CValue::L2CValue(aLStack528,1.0);
    lib::L2CValue::L2CValue(aLStack544,false);
    HVar8 = lib::L2CValue::as_hash(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack512);
    fVar11 = (float)lib::L2CValue::as_number(aLStack528);
    bVar1 = lib::L2CValue::as_bool(aLStack544);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack512,0x1d12d48c50);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  HVar8 = lib::L2CValue::as_hash(aLStack512);
  app::lua_bind::LinkModule__send_event_parents_impl(*ppBVar9,iVar2,HVar8);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FinalHit_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

